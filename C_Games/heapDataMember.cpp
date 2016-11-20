#include <iostream>
#include <string>

using namespace std;

class Critter4
{
public:
	Critter4(const string& name = "", int age = 0);
	~Critter4(); //destructor prototype
	Critter4(const Critter4& c);//copy constructor prototype
	Critter4& operator=(const Critter4& c);//overloaded assignment operator
	void greet() const;

private:
	string* mpName;
	int mAge;
};

Critter4::Critter4(const string& name, int age)
{
	cout << "Constructor called" << endl;
	mpName = new string(name);
	mAge = age;
}

Critter4::~Critter4()//destructor definition
{
	cout << "Destructor called" << endl;
	delete mpName;
}

Critter4::Critter4(const Critter4& c)//copy constructor definition
{
	cout << "Copy Constructor called" << endl;
	mpName = new string(*(c.mpName));
	mAge = c.mAge;
}

Critter4& Critter4::operator=(const Critter4& c)
//overloaded assignment op def
{
	cout << "Overloaded Assignment Operator called" << endl;
	if (this != &c)
	{
		delete mpName;
		mpName = new string( *(c.mpName) );
		mAge = c.mAge;
	}
	return *this;
}

void Critter4::greet() const
{
	cout << "I'm " << *mpName << " and I'm " << mAge << " years old. ";
	cout << "&mpName: " << &mpName << endl;
}

////////////

void testDestructor();
void testCopyConstructor(Critter4 aCopy);
void testAssignmentOp();

int main()
{
	testDestructor();
	cout << endl;

	Critter4 crit("Poochie", 5);
	crit.greet();
	testCopyConstructor(crit);
	crit.greet();
	cout << endl;

	testAssignmentOp();
	cout << "\n-----@@@@\n";
	int i = 0;

	//delete crit777;
	cout << "\n-----@@@@\n";
	return 0;
}

void testDestructor()
{
	Critter4 toDestroy("Rover", 3);
	toDestroy.greet();
}

void testCopyConstructor(Critter4 aCopy)
{
	aCopy.greet();
}

void testAssignmentOp()
{
	Critter4 crit1("crit1", 7);
	Critter4 crit2("crit2", 9);
	cout << "\n-----\n";
	crit1 = crit2;
	cout << "-----\n";
	crit1.greet();
	crit2.greet();
	cout << endl;

	Critter4 crit3("crit", 11);
	//crit3 = crit3;
	crit3.greet();
}
