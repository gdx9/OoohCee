#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;
/*
int main()
{
	srand(static_cast<unsigned int>(time(0)));

	int secretNum = rand() % 100 + 1;// 1-100

	int triesCount = 0;
	int guess;

	cout << "Hello, Guess a number" << endl;

	do
	{
		cout << "Enter number: " << '\n';
		cin >> guess;
		triesCount++;

		if(guess > secretNum)
		{
			cout << "Your number is too high!\n";
		}
		else if(guess < secretNum)
		{
			cout << "Your number is too low!\n";
		}
		else
		{
			cout << "You win with a " << triesCount << " moves!" << endl;
		}

	}
	while(guess != secretNum);

	return 0;

}*/
