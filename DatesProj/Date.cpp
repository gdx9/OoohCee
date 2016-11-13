#include "Date.h"

#include <iostream>
#include <iomanip>
using namespace std;

/* Функция запрашивает ввод даты с клавиатуры и заносит её в структуру по
   адресу, переданному в качестве параметра */
void askForDate(Date* pDate)
{
	cout << "Enter date in format dd.mm.yyyy: ";

	int mm;
	char c; // символ для считывания точек

	cin >> pDate->dd >> c
		>> mm   >> c
		>> pDate->yyyy;
	pDate->mm = (Month)mm;
}

/* Функция для вывода даты на консоль */
void printDate(const Date* pDate)
{
	cout << setfill('0');
	cout << setw(2) << pDate->dd << '.';
	cout << setw(2) << (int)pDate->mm << '.';
	cout << setw(4) << pDate->yyyy;
	cout << setfill(' ');
}

/* Функция для определения, является ли год переданной даты високосным */
bool isLeapYear(const Date* pDate)
{
	int y = pDate->yyyy;

	if ( y % 4 == 0 &&
		(y % 100 != 0 || y % 400 == 0) )
		return true;
	else
		return false;
}
