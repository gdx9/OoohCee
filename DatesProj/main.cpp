#include <iostream>
#include <iomanip>
#include "Date.h"
#include "RemarkableDate.h"

using namespace std;

int main()
{

	printRemarkableDate(&gagarinsFlight, "Gagarin flew into space");

	Date d;

	cout << "what is your date of birth?";

	askForDate(&d);

	if(isLeapYear(&d))
	{
		if(d.mm == FEB && d.dd == 29)
			cout << "every four years!" <<	endl;
		else
			cout << "You were born in a leap year!" << endl;
	}
	else
	{
		cout << "Simple date" << endl;
	}

	/////////////

	Date* pDate = new Date;// выделить память
	delete pDate;// освободить выделенную память. Если выделяем без new, то можно не удалять
	pDate = NULL;// зануляем указатель

	char answer;
	cin >> answer;
	if(toupper(answer) == 'Y'){}

	Date* date = new Date[50];
	delete[] date;


	strncpy(куда, откуда, сколько);// копировать массив символов. В конец потом добавить \0
	char buffer[10000];

	cin >> buffer;
	cin.get();// извлечь 1 символ. Потому что этот один символ - ENTER, который мы нажали. Так что все введенные значение в переменной, а ENTER остался в cin.

	cin.getline(buffer,10000);// скопировать введенные символы в buffer НЕ более 10000 символов
	strlen(buffer);// вернет положение \0 в массиве


}

