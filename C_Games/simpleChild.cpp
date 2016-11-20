#include <iostream>
using namespace std;

class Enemy
{
public:
	int mDamage;
	Enemy();
	void attack() const;
};

Enemy::Enemy():
	mDamage(10)
{}

void Enemy::attack() const
{
	cout << "Attack inflicts " << mDamage << " damage points!\n";
}

class Boss : public Enemy
{
public:
	int mDamageMultiplier;
	Boss();
	void specialAttack() const;

};

Boss::Boss():
	mDamageMultiplier(3)
{}

void Boss::specialAttack() const
{
	cout << "Special Attack inflicts " << (mDamageMultiplier * mDamage);
	cout << " damage points!\n";
}
/*
int main()
{
	cout << "Creating an enemy.\n";
	Enemy enemy1;
	enemy1.attack();

	cout << "\nCreating a boss.\n";
	Boss boss1;
	boss1.attack();
	boss1.specialAttack();

	return 0;
}*/
