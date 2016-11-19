#include <iostream>
#include <string>
#include <vector>

using namespace std;

void display(const vector<string>& inventory);
/*
int main()
{
	vector<string> inventory;
	inventory.push_back("sword");
	inventory.push_back("armor");
	inventory.push_back("shield");

	display(inventory);

	return 0;
}
*/
void display(const vector<string>& vec)
{

	vector<string>::const_iterator iter = vec.begin();
	while( iter != vec.end() )
	{
		cout << *iter << endl;
		iter++;
	}

}
