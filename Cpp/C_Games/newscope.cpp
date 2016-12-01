#include <iostream>

using namespace std;

void func();
/*
int main()
{
	int var = 5;  // local variable in main()
	cout << "In main() var is: " << var << endl;

	func();

	cout << "Back in main() var is: " << var << endl;

	{
		cout << "--start of new scope" << endl;
		cout << "--In main() in a new scope var is: " << var  << endl;
		cout << "--Creating new var in new scope." << endl;
		int var = 10;  // variable in new scope, hides other variable named var
		cout << "--In main() in a new scope var is: " << var << endl;
		cout << "--end of new scope" << endl;
	}

	cout << "At end of main() var created in new scope no longer exists." << endl;

	cout << "At end of main() var is: " << var << endl;

	return 0;

}*/

void func()
{
	int var = -555;  // local variable in func()
	cout << "In func() var is: " << var << endl;
}
