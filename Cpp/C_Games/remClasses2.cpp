#include <iostream>

using namespace std;

class Critter
{
public:
	Critter(int hunger = 0);
	int getHunger() const;
	void setHunger(int hunger);

private:
	int mHunger;
};

Critter::Critter(int hunger):
		mHunger(hunger)
{
	cout << "New Critter created" << endl;
}

int Critter::getHunger() const
{
	return mHunger;
}

void Critter::setHunger(int hunger)
{
	mHunger = hunger;
}
/*
int main()
{
	Critter crit1(5);
	Critter crit2 = Critter(6);

	cout << "crit2 before:" << crit1.getHunger() << endl;
	crit1.setHunger(3);
	cout << "crit2 after:" << crit1.getHunger() << endl;

	cout << "crit2:" << crit2.getHunger() << endl;

	return 0;

}*/
