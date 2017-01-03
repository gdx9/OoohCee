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

int main()
{

	std::ifstream wordsFile;
	const char* filePath = "/home/gdx/Documents/debian.txt";// ???
	wordsFile.open(filePath);

	if( !wordsFile.is_open() )
	{
		std::cout << "couldn't open a file";
	}

	std::vector<std::string> words;

	std::string word;
	while (wordsFile >> word)
	{

		// erase not a letter symbols and transform string to lower case
		int len = word.length();
		while(len>=0)
		{
			if( !isalpha(word[len-1]) )
				word.erase(word.begin()+len-1);

			word[len] = tolower(word[len]);
			--len;
		}

		// check is that word in a vector
		if( std::find(words.begin(), words.end(), word ) != words.end()) {
			/* vector contains word */
		} else {
			/* vector does not contain word */
			words.push_back(word);
		}
	}

	for(unsigned int i=0; i<words.size(); ++i){
		std::cout << words[i] << std::endl;
	}

}
