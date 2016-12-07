#include <iostream>
#include <fstream>
#include <cstring>
#include <string>

using namespace std;

//int    sum(int a, int b){return a+b;};
//double sum(double a, double b){return a+b;};
//
//int    sum(long a, long b){return a+b;};// вызвав для int будет ошибка
//double sum(short a, short b){return a+b;};// вызвав для int будет ошибка

template<typename T>
T sum(T a, T b){return a+b;};// только для двух одинаковых типов!!!
// для разных вызывать: sum<double>(12.4, 3); - преобразовать оба параметра в double

template<typename T1, typename T2>
auto printParams(T1 a, T2 b) -> decltype(a+b)// decltype вернет ТИП, который получится при сложении a+b
{
    auto c = a+b;// auto-type
    //cout << c;
    return c;
}

/*
int main()
{
    cout << sum(12,2) << endl;
    cout << sum(3.4,2.3) << endl;
    //cout << sum(3.4,2) << endl;// не сможет выбрать правильный вариант(функцию для int или для double)
    
    string str = "hello";
    cout << sum(str, (string)" world") << endl;
    
    cout << printParams(12.3, 4);
    
    return 0;
}
*/