#include <iostream>
#include <string>

using namespace std;

int tripleFunc(int number);
string tripleFunc(string text);
/*
int main()
{
	cout << "Tripling 5: " << tripleFunc(5) << "\n\n";
	cout << "Tripling 'gamer': " << tripleFunc("gamer");

	return 0;

}*/

int tripleFunc(int number)
{
	return (number * 3);
}

string tripleFunc(string text)
{
	return (text + text + text);
}
