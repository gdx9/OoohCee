#include "word_manip.h"

namespace word_manip
{
	Word::Word(std::string *eng_, std::string *trans_)
	{
		this->eng = new std::string(*eng_);
		this->trans = new std::string(*trans_);
	}

	Word::~Word()
	{
		delete eng;
		delete trans;
	}

	std::string * Word::getEng() const
	{
		return eng;
	}

	std::string * Word::getTrans() const
	{
		return trans;
	}

	bool checkSym(const char symb)
	{
		std::string engLine = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

		int enLen = engLine.length()-1;

		for (int i=0; i<enLen; ++i) {
			if(symb == engLine[i])
			{
				return true;
			}
		}

		return false;

	}

	// read each line of document, make Word Objects('end word', 'translation') and push them into a vector
	// return NULL if file open error occured
	void readWordsFile(std::vector<Word *> *words)
	{
		std::ifstream wordsFile;
		const char* filePath = "/home/gdx/Downloads/1.txt";// ???
		wordsFile.open(filePath);

		if( !wordsFile.is_open() )
		{
			std::cout << "couldn't open a file";
			return;
		}

		// current line in file
		std::string line;
		while( getline(wordsFile, line) )
		{

			std::string tempName = "";
			std::string tempTrans = "";
			bool isName = true;// flag for name

			for(unsigned int j=0; j<line.length(); j++)
			{
				// if it's still a name and this or next symbol is from English alphabet
				if( isName && ( checkSym(line[j]) || checkSym(line[1+j]) ) )
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

			// add to vector
			(*words).push_back(word);

		}

	}

	// clear all Words vector elements
	void clearWordsVec(std::vector<Word *> *words)
	{
		for( Word *w : (*words) ){
			delete w;
			w = NULL;
		}
		(*words).clear();

		std::cout << ".........Words vector is cleared........." << std::endl;
	}

	// show all Words inside the vector
	void showWords(const std::vector<Word *> *words)
	{
		for( Word *w : (*words) ){
			std::cout << "Name:" << *( (*w).getEng() ) << ". translate:" << *( (*w).getTrans() ) << std::endl;
		}
	}

	// show random Word from a vector
	void showRandom(const std::vector<Word *> *words)
	{
		std::srand(time(0));


		char c;
		int randNum = std::rand() % (*words).size();// random number for a Word in vector

		while(std::cin >> c)
		{
			if(c=='n')// next
			{
				randNum = std::rand() % (*words).size();
				std::cout << *((*words).at(randNum)->getEng()) << std::endl;
			}
			else if(c=='h')//show translation
			{
				std::cout << *((*words).at(randNum)->getTrans()) << std::endl;
			}else if(c == 'm')
			{
				std::cout << *((*words).at(randNum)->getEng()) << ':' << *((*words).at(randNum)->getTrans()) << std::endl;
			}
		}
	}

}
