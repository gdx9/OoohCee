#include <iostream>

//STL
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

void display(char* str)
{
	cout << str << endl;
}

int main()
{
	vector<char*> arrString;

	arrString.push_back( (char*)"String 1" );
	arrString.push_back( (char*)"String 2" );
	arrString.push_back( (char*)"String 3" );
	arrString.push_back( (char*)"String 4" );
	arrString.push_back( (char*)"String 5" );

	vector<char*>::iterator iterStart = arrString.begin();
	vector<char*>::iterator iterEnd = arrString.end();

	for_each(iterStart,iterEnd, display);// iter start,iter end, function for iter element

	return 0;
}
