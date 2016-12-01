#include "RemarkableDate.h"
#include <iostream>
using namespace std;

void printRemarkableDate(const Date* pDate, char* descr)
{
	printDate(pDate);
	cout << ' ' << descr << '!';
}

Date gagarinsFlight = {12, APR,1961};
