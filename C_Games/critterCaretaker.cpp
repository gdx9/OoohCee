#include <iostream>

using namespace std;

class Critter
{
public:
	Critter(int hunger = 0, int boredom = 0);
	void talk();
	void eat(int food = 4);
	void play(int fun = 4);

private:
	int mHunger;
	int mBoredom;

	int getMood() const;
	void passTime(int time = 1);

};

Critter::Critter(int hunger,int boredom):
		mHunger(hunger),
		mBoredom(boredom)
{}

inline int Critter::getMood() const
{
	return (mHunger + mBoredom);
}

void Critter::passTime(int time)
{
	mHunger += time;
	mBoredom += time;
}

void Critter::talk()
{
	cout << "It's a critter" << endl;

	int mood = getMood();

	if(mood >15)
	{
		cout << "I'm mad" << endl;
	}
	else if(mood > 10)
	{
		cout << "I'm frustrated" << endl;
	}else if(mood > 5)
	{
		cout << "I'm OK" << endl;
	}
	else{
		cout << "I'm happy" << endl;
	}
	passTime();
}

void Critter::eat(int food)
{
	cout << "Nyam" << endl;

	mHunger -= food;
	if(mHunger < 0)
	{
		mHunger = 0;
	}
	passTime();
}

void Critter::play(int fun)
{
	cout << "playing..." << endl;

	mBoredom -= fun;

	if(mBoredom < 0)
	{
		mBoredom = 0;
	}
	passTime();
}
/*
int main()
{
	Critter crit;

	crit.talk();

	int choice;
	do
	{
		cout << '\n' << endl;
		cout << "Critter Caretaker" << endl;
		cout << "0 - Quit" << endl;
		cout << "1 - Listen to your critter" << endl;
		cout << "2 - Feed your critter" << endl;
		cout << "3 - Play with your critter" << endl;

		cout << "Choice: ";
		cin >> choice;

		switch (choice)
		{
			case 0:
				cout << "Goodbye." << endl;
				break;
			case 1:
				crit.talk();
				break;
			case 2:
				crit.eat();
				break;
			case 3:
				crit.play();
				break;
			default:
				cout << "Sorry, but " << choice << " isn't a valid choice." << endl;
		}
	}while (choice != 0);

	return 0;

}*/
