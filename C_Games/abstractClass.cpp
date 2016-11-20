#include <iostream>
using namespace std;

class Creature//abstract class
{
public:
	Creature(int health = 100);
	virtual void greet() const = 0;//pure virtual member function
	virtual void displayHealth() const;

protected:
	int mHealth;
};

Creature::Creature(int health):
	mHealth(health)
{}

void Creature::displayHealth() const
{
	cout << "Health: " << mHealth << endl;
}

class Orc : public Creature
{
public:
	Orc(int health = 120);
	virtual void greet() const;
};

Orc::Orc(int health):
		Creature(health)
{}

void Orc::greet() const
{
	cout << "The orc grunts hello.\n";
}

/*
int main()
{
	Creature* pCreature = new Orc();
	pCreature->greet();
	pCreature->displayHealth();

	return 0;
}*/
