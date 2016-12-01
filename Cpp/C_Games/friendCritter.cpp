#include <iostream>
#include <string>

using namespace std;

class Critter3
{
	// Указываем. что следующие глобальные функции являются дружественными
	// по отношению к классу Critter
	friend void peek(const Critter3& aCritter);// глобальная функция peek является
	// дружественной данному классу. Имеет доступ ко всем поляв класса
	friend ostream& operator<<(ostream& os, const Critter3& aCritter);

public:
	Critter3(const string& name = "");

private:
	string mName;
};

Critter3::Critter3(const string& name):
		mName(name)
{}

void peek(const Critter3& aCritter);
ostream& operator<<(ostream& os, const Critter3& aCritter);
/*
int main()
{
	Critter3 crit("Poochie");

	cout << "Calling Peek() to access crit's private data member, m_Name: \n";
	peek(crit);

	cout << "\nSending crit object to cout with the << operator:\n";
	cout << crit;

	return 0;
}*/

void peek(const Critter3& aCritter)
{
	cout << aCritter.mName << endl;
}
// переопределяем оператов '<<' для класса Critter3
ostream& operator<<(ostream& os, const Critter3& aCritter)
{
	os << "Critter Object - ";
	os << "mName: " << aCritter.mName;
	return os;
}
