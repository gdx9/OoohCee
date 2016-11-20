#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Critter
{
public:
	Critter(const string& name = "");
	string getName() const;

private:
	string mName;
};

Critter::Critter(const string& name):
	mName(name)
{}

inline string Critter::getName() const
{
	return mName;
}

class Farm
{
public:
	Farm(int n = 1);
	void add(const Critter& aCritter);
	void rollCall() const;

private:
	vector<Critter> mCritters;
};

Farm::Farm(int n)
{
	mCritters.reserve(n);// reserve space for n elements
}

void Farm::add(const Critter& aCritter)
{
	mCritters.push_back(aCritter);
}

void Farm::rollCall() const
{
	for (vector<Critter>::const_iterator iter = mCritters.begin();
			iter != mCritters.end();
				++iter)
	{
		cout << iter->getName() << " here." << endl;
	}
}
/*
int main()
{
	Critter crit("Poochie");
	cout << "My critter's name is " << crit.getName() << endl;

	cout << "\nCreating critter farm." << endl;
	Farm myFarm(3);

	cout << "\nAdding three critters to the farm." << endl;
	myFarm.add(Critter("Moe"));
	myFarm.add(Critter("Larry"));
	myFarm.add(Critter("Curly"));

	cout << "\nCalling Roll..." << endl;
	myFarm.rollCall();

	return 0;
}*/
