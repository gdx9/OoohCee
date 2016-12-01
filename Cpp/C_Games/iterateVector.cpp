#include <iostream>

#include <string>
#include <vector>

using namespace std;

void displayItems(const vector<string>* const vec)
{
	for(vector<string>::const_iterator iter = (*vec).begin(); iter!=(*vec).end(); iter++)
	{
		cout << *iter << endl;
	}
}
/*
int main()
{
	vector<string> inventory;
	inventory.push_back("sword");
	inventory.push_back("armor");
	inventory.push_back("shield");

	displayItems(&inventory);


	return 0;

}*/
