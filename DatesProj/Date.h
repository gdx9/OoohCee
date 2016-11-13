#ifndef DATE_H_// если еще не было подключино DATE_H_, то подключит

#define DATE_H_// объявить текущий файл, как константу(для подключений)

enum Month {
	JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC, MONTHS = 12
};

struct Date {
	int dd;
	Month mm;
	int yyyy;
};

void askForDate(Date* pDate);
void printDate(const Date* pDate);
bool isLeapYear(const Date* pDate);

#endif
