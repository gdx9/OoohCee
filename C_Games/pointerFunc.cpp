#include <iostream>
#include <string>
#include <vector>

using namespace std;

string* getPointer(vector<string>* const vec, int position)
{
	return &( (*vec)[position] );
}
/*
int main()
{
	vector<string> inventory;
	inventory.push_back("sword");
	inventory.push_back("armor");
	inventory.push_back("shield");

	for(unsigned int i=0; i<inventory.size();i++){
		cout << "element: " << inventory[i] << endl;
		string* elPointer = getPointer(&inventory, i);
		cout << "*pointer: " << *elPointer << endl;
		cout << "pointer: " << elPointer << endl;
		cout << '\n';
	}


}*/
