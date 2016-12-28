/*
 * it works with a file consists of 'word translation' lines
 */
#include <iostream>
#include <fstream>
#include <vector>
#include "word_manip.h"

using namespace word_manip;

int main()
{

	std::ifstream wordsFile;
	const char* filePath = "/home/gdx/Downloads/1.txt";// ???
	wordsFile.open(filePath);

	if( !wordsFile.is_open() )
	{
		std::cout << "couldn't open a file";
		return -1;
	}

	// vector for all Words
	std::vector<Word *> words;

	// current line in file
	std::string line;
	while( getline(wordsFile, line) )
	{

		std::string tempName = "";
		std::string tempTrans = "";
		bool isName = true;// flag for name

		for(unsigned int j=0;j<line.length(); j++)
		{

			// if it's still a name and this or next symbol is from English alphabet
			if( isName && ( checkSym(line[j]) || checkSym(line[++j]) ) )
			{
				tempName += line[j];
				continue;
			}else
			{
				// if name flag is false - write line to translation string
				isName = false;
				tempTrans += line[j];
			}

		}

		Word *word = new Word(&tempName, &tempTrans);

		words.push_back(word);

	}

	for(Word *w : words){
		std::cout << "Name: " << *( (*w).getEng() ) << ". translate: " << *( (*w).getTrans() ) << std::endl;
		delete w;
	}
	words.clear();

	std::cout << "........." << std::endl;
//	cout << (*words[0]).eng << endl;


	return 0;
}

