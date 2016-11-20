#include <iostream>

using namespace std;

class Enemy4
{
public:
	Enemy4(int damage = 10);
	virtual ~Enemy4();
	void virtual attack() const;

protected:
	int* mpDamage;
};

Enemy4::Enemy4(int damage)
{
	mpDamage = new int(damage);
}

Enemy4::~Enemy4()
{
	cout << "In Enemy4 destructor, deleting mpDamage.\n";
	delete mpDamage;
	mpDamage = 0;
}

void Enemy4::attack() const
{
	cout << "An Enemy4 attacks and inflicts " << *mpDamage << " damage points.";
}

class Boss4 : public Enemy4
{
public:
	Boss4(int multiplier = 3);
	virtual ~Boss4();
	void virtual attack() const;

protected:
	int* mpMultiplier;
};

Boss4::Boss4(int multiplier)
{
	mpMultiplier = new int(multiplier);
}

Boss4::~Boss4()
{
	cout << "In Boss4 destructor, deleting mpMultiplier.\n";
	delete mpMultiplier;
	mpMultiplier = 0;
}

void Boss4::attack() const
{
	cout << "A Boss4 attacks and inflicts " << (*mpDamage) * (*mpMultiplier)
		 << " damage points.";
}

int main()
{
	cout << "Calling Attack() on Boss4 object through pointer to Enemy4:\n";
	Enemy4* pBadGuy = new Boss4();
	pBadGuy->attack();

	cout << "\n\nDeleting pointer to Enemy4:\n";
	delete pBadGuy;
	pBadGuy = 0;

	return 0;
}
