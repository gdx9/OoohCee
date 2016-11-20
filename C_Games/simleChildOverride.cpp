#include <iostream>

using namespace std;

class Enemy3
{
public:
	Enemy3(int damage = 10);
	void virtual taunt() const;// made virtual to be overridden
	void virtual attack() const;//made virtual to be overridden
	int n;

private:
	int mDamage;
};

Enemy3::Enemy3(int damage):
	mDamage(damage)
{}

void Enemy3::taunt() const
{
	cout << "The Enemy3 says he will fight you.\n";
}

void Enemy3::attack() const
{
	cout << "Attack! Inflicts " << mDamage << " damage points.";
}

class Boss3 : public Enemy3
{
public:
	Boss3(int damage = 30);
	void virtual taunt() const;//optional use of keyword virtual
	void virtual attack() const;//optional use of keyword virtual
};

Boss3::Boss3(int damage):
	Enemy3(damage)//call base class constructor
{}

void Boss3::taunt() const//override base class member function
{
	cout << "The Boss3 says he will end your pitiful existence.\n";
}

void Boss3::attack() const//override base class member function
{
	Enemy3::attack();//call base class member function
	cout << " And laughs heartily at you.\n";
}
/*
int main()
{
	cout << "Enemy3 object:\n";
	Enemy3 anEnemy3;
	anEnemy3.taunt();
	anEnemy3.attack();

	cout << "\n\nBoss3 object:\n";
	Boss3 aBoss3;
	aBoss3.taunt();
	aBoss3.attack();

	return 0;
}*/
