/*
 * it works with a file consists of 'word translation' lines
 */

#include <iostream>

#include "word_manip.h"

using namespace word_manip;



int main()
{
	// vector for all Words
	std::vector<Word *> words;

	readWordsFile(&words);

	showRandom(&words);

	clearWordsVec(&words);

	return EXIT_SUCCESS;
}

