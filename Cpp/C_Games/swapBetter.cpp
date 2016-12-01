#include <iostream>

using namespace std;

void goodSwap(int* const x, int* const y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
/*
int main()
{
	int first = 150;
	int second = 1000;
	cout << "Original values:" << endl;
	cout << "first: " << first << endl;
	cout << "second:" << second << endl;

	goodSwap(&first, &second);
	cout << "After calling goodSwap():" << endl;
	cout << "first: " << first << endl;
	cout << "second:" << second << endl;

	return 0;
}*/
