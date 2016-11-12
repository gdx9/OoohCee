#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>// ищем в стандартных директориях для средства разработки
#include "pi.h"// ищем в этой директории(короче, те, что мы написали сами)
#define PI2 3.14// объявили константу. можно дальше использовать
#define P_R 400 + 30 // каждое место, где мы будем использовать эту константу заменит ТОЧНО на это же выражение. То есть:
	// 30 * P_R = 300 * 400 + 30. Что не правильно, так что пишем скобки!


using namespace std;

//extern "C";
//double sin(double);
void printAsBinary(unsigned int x);

enum Month{ JAN = 1,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC };

struct Date
{
	int dd;
	Month mm;
	int yy;


};

Date addYear(Date d)
{
	d.yy++;
	// 29.02.08
	if( d.dd == 29 && d.mm == FEB ){
		d.dd = 28;
	}

	return d;
}


int main(){

	/*
	cout << setfill('_');// fill ALL empty symbols as '_'(not space, just empty, like with setw())
	cout << "Name:   " << setw(20) << "Vasily" << endl;// setw(20) - set with of next line in 20 symbols. And right layout
	cout << "Surname:" << setw(20) << "Pugovkin" << endl;// endl - end of line
	cout << "Sex:    " << setw(20) << "male" << endl;
	cout << "Birth:  " << setw(20) << 1980 << endl;
	 */

	/*
	// 123: 24 105.20 B
	int n;
	int days;
	double price;
	char category;
	char c;

	// >> - вводим, << - выводим
	// cin >> noskipws;
	cin >> n;// вводим символы в консоль. Первый до пробела - n
	cin >> c;// второй до пробела - c
	cin >> days;// третий - days и т.д.
	cin >> price;
	cin >> category;

	cout << n << ' ' << days << ' ' << price << ' ' << category << endl;// вывод переменных
	*/

	int a,b,c,d;

	a = 2;
	b = a;

	cout << (a = 2) << endl;

	// Приоритет операций

	c = (a * 3);
	(c = a) * 3;// c = a, и только потом множим. Но зачем?

	// читать справа-налево
	d = b = (c = a) * 3;
	// d = (b = (c = a) * 3);// то же самое

	a = 2;
	c = a / 3; // c = 0, потому что int - целая часть от деления(2 / 3 = 0,33 = 0)

	double dc;
	dc = a / 3;// dc = 0. т.к. a - int. А сначала выполнится (2 / 3 = 0,33 = 0), а уже потом присвоится результат
	cout << "cd = " << dc << endl;


	int draughts = 89;
	int boards = draughts /12;

	int draughtLeft = draughts % 12;

	cout << draughts / 12 * 12 << endl;

	cout << sizeof(char) << endl;
	cout << sizeof(bool) << endl;
	cout << sizeof(float) << endl;
	cout << sizeof(35*2) << endl;

	char x = 'X';
	int z;
	z = x;// прии привидении типов в начало допишутся нули, т.к. int в 4 раза больше
	cout << sizeof(x) << endl;
	cout << sizeof(z) << endl;

	signed char x1 = -40;// 11011000
	int z1;
	z1 = x1;// при привидении типов в signed допишутся в начало еденицы(11111111 11111111 11111111 11011000)
	cout << sizeof(x1) << endl;
	cout << sizeof(z1) << endl;

	int z2 = 292599;// 00000000 00000100 01110110 11110111
	short x2 = z2;// при преобразовании просто зачеркнуться ПЕРВЫЕ 16 байтов - 01110110 11110111. т.к. там были важные значения, то результат будет НЕ правильный
	// это если число больше, чем максимальное значение того типа, в который мы преобразуем

	// при округлении чисел с точкой в челочисленные - просто ОТБРАСЫВАЕТСЯ дробная часть, не округляется

	unsigned int u2 = -5;// u2 - 4294967291 = 2^32 - 5. Потому что байты ОДИНАКОВЫЕ, просто оно - ансайнд
	// int a = 2 000 000 000 + 2 000 000 000; отобразится неправильно, потому что не влазит в int


	//srand(time(0));

	////////////////////////////////

	/// Побитовые операции
	/*
	Имеем число 5 - 00000101. Чтобы сделать ему противоположное инвертируем биты:
	11111010 - и добавить 1 = 11111011. Это и есть -5

	*/

	short int q = 5;
	q = q << 1;// сдвиг влево на 1 бит:
	/*
	было: 0000000000000101
	стало:0000000000001010. Просто дописали 0 в конце, а в начале удалили один символ
	*/
	// сдвиг влево на n похиций - умножение на 2^n, если не происходит потери значащих битов ( единиц )

	short int q2 = 5;
	q2 = q2 >> 1;

	unsigned char a3,b3,c3;
	a3 = 41;
	b3 = 236;
	c3 = a3 & b3;
	/*
	00101001
	11101100
	--------
	00101000
	*/
	// остаются только те биты, где совпадают единицы

	c3 = a3|b3;
	/*
	00101001
	11101100
	--------
	11101101
	*/
	// остается то, что имеет 1

	unsigned char a4,b4;
	a4 = 41;
	b4 = ~a4;// инверсия битов
	// ~~a4 - вернет исходное состояние a4

	c3 = a4 ^ b4;
	/*
	00101001
	11101100
	--------
	11000101 // остается только ОСТАТОК ОТ ДЕЛЕНИЯ СУММЫ БИТОВ НА 2 - %(1+0=1/2=1, 1+1=2/2=0)
	*/

	unsigned long style;
	unsigned long mask = (1L << 28);// заполняем 28 бит единицей
	if( (style&mask) != 0 ){// зануляем все биты, кроме 28. Если 28 занулился тоже - значит там был 0. Значит, 28 бит изначально был 0.
		// включение бита - |=
		//бит установлен
	}

	typedef unsigned long DWORD;
	DWORD k = 1;// unsigned long k = 1

	int xx = 5;
	printAsBinary(xx);
	printAsBinary(xx);

	///////

	Date moscowDay;
	moscowDay.dd = 4;
	moscowDay.mm = SEP;
	moscowDay.yy = 11;

	Date teachersDay = {5,OCT,11};
	Date day;
	day = teachersDay;
	Date teachersDayNextYear;

	teachersDayNextYear = addYear(teachersDay);// передастся копия


}

void printAsBinary(unsigned int x){

	for( int i=sizeof(unsigned int)*8-1;i>=0;i-- ){

		unsigned mask = (1 << i);

		if(x & mask){
			cout << '1';
		}else{
			cout << '0';
		}

	}
	cout << "\n";

	x=0;

}


