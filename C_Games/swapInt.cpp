#include <iostream>

using std::cout;
using std::endl;

void swapInts(int&, int&);
/*
int main()
{
	int a = 10;
	int b = 20;

	cout << "Before swapping. a = " << a << ", b = " << b << endl;

	swapInts(a,b);

	cout << "After swapping.  a = " << a << ", b = " << b << endl;

	return 0;

}*/

void swapInts(int& firstInt, int& secInt)
{
	int temp = firstInt;
	firstInt = secInt;
	secInt = temp;
}
