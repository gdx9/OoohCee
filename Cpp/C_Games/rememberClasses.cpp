#include <iostream>

using namespace std;

class MyClass
{
public:
	int age;

	MyClass(int age = 0);
	void sayHello();
};

MyClass::MyClass(int age)
{
	cout << "MyClass obj creating" << endl;
	this->age = age;
}

void MyClass::sayHello()
{
	cout << "Hello, my age is " << age;
}
/*
int main()
{
	MyClass f1(13);
	f1.sayHello();

	return 0;

}*/
