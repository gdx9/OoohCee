/*
 * main.cpp
 *
 *  Created on: Jan 3, 2017
 *      Author: gdx
 */

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <algorithm>

void readWords(std::vector<std::string> *words)
{
	std::ifstream wordsFile;
	const char* filePath = "/home/gdx/Downloads/words/Disdis.txt";// ???
	wordsFile.open(filePath);

	if( !wordsFile.is_open() )
	{
		std::cout << "couldn't open a file";
	}

	std::string word;
	while (wordsFile >> word)
	{

		// erase not a letter symbols and transform string to lower case
		int len = word.length();
		--len;

		while(len >= 0)
		{
			if( !isalpha(word[len-1]) )
				word.erase(word.begin()+len-1);

			word[len] = tolower(word[len]);
			--len;
		}

		// check is that word in a vector
		if( std::find((*words).begin(), (*words).end(), word ) != (*words).end()) {
			/* vector contains word */
		} else {
			/* vector does not contain word */
			(*words).push_back(word);
		}
	}
	// close a file
	wordsFile.close();
}

void writeWords(std::vector<std::string> *words)
{
	std::ofstream writingFile;

	// file for writing new words
	const char *writingPath = "/home/gdx/Downloads/words/new.txt";
	writingFile.open(writingPath);

	if( !writingFile.is_open() )
		std::cout << "error" << std::endl;

	int vecSize = (*words).size();
	for(unsigned int i=0; i<vecSize; ++i){
		// show in console
		std::cout << (*words)[i] << std::endl;

		// write word into file
		writingFile << (*words)[i] << '\n';
	}

	// close a file
	writingFile.close();
}

int main()
{
	std::vector<std::string> words;

	readWords(&words);

	// sorting words
	std::sort(words.begin(), words.end());

	writeWords(&words);

	words.clear();

	return EXIT_SUCCESS;

}
