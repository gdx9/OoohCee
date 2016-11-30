#include <iostream>
#include <string>
#include <cstring>

using namespace std;


//int minimum(int obj1,int obj2)
//{
//    return obj1 < obj2 ? obj1 : obj2;
//}
//double minimum(double obj1, double obj2)
//{
//    return obj1 < obj2 ? obj1 : obj2;
//}
//string minimum(string obj1, string obj2)
//{
//    return obj1 < obj2 ? obj1 : obj2;
//}


//template<class T>
template<typename T>
T minimum(T obj1, T obj2)
{
    return obj1 < obj2 ? obj1 : obj2;
}

template<>
//const char* minimum<const char*>(const char* obj1, const char* obj2)
const char* minimum(const char* obj1, const char* obj2)// можно без <...> т.к. в параметрах указаны типы явно
{
    return strcmp(obj1, obj2) <= 0 ? obj1 : obj2;
}
/*
int main()
{
    int i = 5, j = 10;
    
//    cout << minimum(i,j) << endl;
//    cout << minimum(5.1,2.1) << endl;
    cout << minimum<int>(i,j) << endl;                           // call template function for 'int'    parameters
    cout << minimum<double>(5.1,2.1) << endl;                    // call template function for 'double' parameters
    cout << minimum<double>(5.1,2) << endl;                      // call template function for 'double' parameters
    cout << minimum<string>(string("abc"),string("Abc")) << endl;// call template function for 'string' parameters
    cout << minimum<const char*>("abc", "Abc") << endl;// call template function for const char* minimum<const char*>
    
}*/