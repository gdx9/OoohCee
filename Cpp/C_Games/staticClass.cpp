#include <iostream>

using namespace std;

class SCritter
{
public:
	static int sTotal;

	SCritter(int hunger = 0);
	static int getTotal();

private:
	int mHunger;
};

int SCritter::sTotal = 0;// static veriable

SCritter::SCritter(int hunger):
		mHunger(hunger)
{
	cout << "Critter created" << endl;
	sTotal++;
}

int SCritter::getTotal()
{
	return sTotal;
}
/*
int main()
{
	cout << "Hello" << endl;
	cout << "Total count of critters: " << SCritter::sTotal << endl;

	SCritter crit1,crit2,crit3;

	cout << "Total count of critters: " << SCritter::sTotal << endl;

}*/
