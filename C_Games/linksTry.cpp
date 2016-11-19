#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::cout;
using std::endl;

string& takeItem(vector<string>&, int);
/*
int main()
{
	vector<string> inventory;
	inventory.push_back("sword");
	inventory.push_back("armor");
	inventory.push_back("shield");

	for(unsigned int i=0; i<inventory.size();i++)
	{
		cout << takeItem(inventory, i) << endl;
	}

	return 0;

}*/

string& takeItem(vector<string>& vec, int i)
{
	return vec[i];
}
