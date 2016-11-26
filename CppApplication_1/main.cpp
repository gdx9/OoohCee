
#include <cstdlib>
#include <iostream>
#include <string>
#include <cstring>


using namespace std;

void square1(int& a)
{
    a *= a;
}

void square2(int* p)
{
    *p *= *p;// хуже, пушо надо разыминовывать
}

void withStatic(int& a, int amount = 1)
{
    static int callCount = 0;// не уничтожается после отработки блока
    callCount++;
    
    cout << callCount << endl;
    
}

int& withStatic2()// можно возвращать ссылку только потому, что callCnt - STATIC
{
    static int callCnt = 0;
    callCnt++;
    return callCnt;
}

int iMin1(int a,int b)
{
    return (a<b) ? a : b;
}

double dMin1(double a, double b)
{
    return (a<b) ? a : b;
}

const char* sMin1(const char* s1, const char* s2)
{
    if( strcmp(s1, s2) <= 0 )
        return s1;
    else
        return s2;
}

////////////////

enum Month {JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG,
			SEP, OCT, NOV, DEC, MONTHS = 12};
struct Date
{
	int dd;
	Month mm;
	int yyyy;
};
bool operator < (const Date& d1, const Date& d2)
{
    return ( d1.yyyy < d2.yyyy ) ||
            ( d1.yyyy == d2.yyyy && d1.mm < d2.mm ) ||
            ( d1.yyyy == d2.yyyy && d1.mm == d2.mm && d1.dd < d2.dd);
}

// pre-increment
//Date operator ++ (Date& date)// return a COPY
Date& operator ++ (Date& date)
{
    date.dd++;
    return date;
}

// post-increment ( with int !!!!)
Date& operator ++ (Date& date, int)
{
    // return a copy
}

// void operator << (ostream& os, const Date& date)// нельзя будет писать дважды вывод cout << date << endl;
ostream& operator << (ostream& os, const Date& date)
{
    os << date.dd << '.' << date.mm << '.' << date.yyyy;
    return os;
}

istream& operator >> (istream& is, Date& date)
{
    // ...
    return is;
}

//////////
int main()
{

    int a = 12;
    
    int& r1 = a;// reference
    // r1 = 13;
    cout << r1 << endl;;
    
    square1(r1);
    cout << r1 << endl;
    
    int x = 10;
    square2(&x);
    cout << x << endl;
    
    int c = 1;
    withStatic(c);
    withStatic(c);
    withStatic(c);
    withStatic(c);
    withStatic(c);
    withStatic(c);
    
    cout << "----------------" << endl;
    cout << withStatic2() << endl;
    cout << withStatic2() << endl;
    cout << "----------------" << endl;
    
    cout << iMin1(12,14) << endl;
    cout << dMin1(12.2,12.3) << endl;
    cout << sMin1("alpha","alma") << endl;
    cout << "----------------" << endl;
    
    Date date1 = {9,SEP,1980};
    Date date2 = {2,SEP,2011};
    Date& minDate = ( date1 < date2 ) ? date1 : date2;
    cout << minDate.yyyy << endl;
    cout << "----------------" << endl;
    
    ++date2;
    ++date2;
    ++date2;
    cout << date2.dd << endl;
    
    cout << date2 << endl;
    
    
    return 0;
    
}

