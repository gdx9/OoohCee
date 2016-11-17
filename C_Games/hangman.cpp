#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>

using namespace std;

int main()
{
	const int MAX_WRONG = 8;  // max of incorrect symbols

	vector<string> words;  // collection of possible words to guess
	words.push_back("GUESS");
	words.push_back("HANGMAN");
	words.push_back("DIFFICULT");

	srand(static_cast<unsigned int>(time(0)));
	random_shuffle(words.begin(), words.end());
	const string THE_WORD = words[0];
	int wrongCount = 0;
	string guessedSymbols(THE_WORD.size(), '-');
	string usedLetters = "";

	cout << "Hello" << endl;

	while((wrongCount < MAX_WRONG) && (guessedSymbols != THE_WORD))
	{
		cout << "chances left: " << (MAX_WRONG - wrongCount) << endl;
		cout << "you've used this letters: " << usedLetters << endl;

		char guess;
		cout << "Write a letter: " << endl;
		cin >> guess;
		guess = toupper(guess);

		if(usedLetters.find(guess) != string::npos)
		{
			cout << "you've already used this letter!!" << endl;
			continue;
		}

		usedLetters += guess;

		if(THE_WORD.find(guess) != string::npos)
		{
			cout << "Yes! you got it!" << endl;

			for(int i=0;i<THE_WORD.length(); i++)
			{
				if(THE_WORD[i] == guess)
				{
					guessedSymbols[i] = guess;
				}
			}
		}
		else
		{
			cout << "Incorrect symbol" << endl;
			wrongCount++;
		}

	}

	if( wrongCount == MAX_WRONG)
	{
		cout << "Game over!" << endl;
	}
	else
	{
		cout << "You WIN!!!" << endl;
		cout << "Guessed word is " << THE_WORD << endl;
	}

	return 0;

}
