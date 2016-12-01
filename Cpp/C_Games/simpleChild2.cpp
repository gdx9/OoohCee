#include <iostream>
using namespace std;

class Enemy2
{
public:
    Enemy2();
    void attack() const;

protected:
    int mDamage;
};

Enemy2::Enemy2():
    mDamage(10)
{}

void Enemy2::attack() const
{
    cout << "Attack inflicts " << mDamage << " damage points!\n";
}

class Boss2 : public Enemy2
{
public:
    Boss2();
    void specialAttack() const;

private:
    int mDamageMultiplier;
};

Boss2::Boss2():
    mDamageMultiplier(3)
{}

void Boss2::specialAttack() const
{
    cout << "Special Attack inflicts " << (mDamageMultiplier * mDamage);
    cout << " damage points!\n";
}
/*
int main()
{
    cout << "Creating an Enemy2.\n";
    Enemy2 Enemy21;
    Enemy21.attack();

    cout << "\nCreating a Boss2.\n";
    Boss2 Boss21;
    Boss21.attack();
    Boss21.specialAttack();

    return 0;
}*/
