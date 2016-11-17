#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

	enum fields {WORD,HINT};

	const int NUM_WORDS = 5;
	const int NUM_FIELDS = 2;
	const string WORDS_ARRAY[NUM_WORDS][NUM_FIELDS] =
	{
			{"wall", "Do you feel you're banging your head against something?"},
			{"glasses", "These might help you see the answer."},
			{"labored", "Going slowly, is it?"},
			{"persistent", "Keep at it."},
			{"jumble", "It's what the game is all about."}
	};

	srand(static_cast<unsigned int>(time(0)));
	int randomChoice = rand() % NUM_WORDS;
	string theWord = WORDS_ARRAY[randomChoice][WORD];// 0
	string theHint = WORDS_ARRAY[randomChoice][HINT];// 1

	string jumble = theWord;
	int length = jumble.size();
	for(int i=0; i<length; i++)
	{
		int index1 = (rand() % length);
		int index2 = (rand() % length);
		char temp = jumble[index1];
		jumble[index1] = jumble[index2];
		jumble[index2] = temp;
	}

	cout << "Guess a word: " << jumble << endl;

	string guess;
	cout << "Your guess:\n";
	cin >> guess;

	while ((guess != theWord) && (guess != "quit"))
	{
		if (guess == "hint")
		{
				cout << theHint << endl;
		}
		else
		{
			cout << "Sorry, that's not it." << endl;
		}

		cout <<"Your guess:" << endl;
		cin >> guess;
	}

	if (guess == theWord)
	{
		cout << "--That's it! You guessed it!!!--" << endl;
	}

	cout << "Thanks for playing!" << endl;

	return 0;

}
