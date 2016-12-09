#include <iostream>
#include <cstdlib>

using namespace std;

class OurAbstract
{
protected:
    int center;
    double radius;
public:
    // methods
    virtual void draw() = 0;// теперь этот класс - абстрактный. Потому что virtual ... = 0;
};

template<typename T,typename T2=int>// int will be default type for T2('Array<int>' will work). default type works FOR SECOND TYPE
class Array
{
    T* arr;
    int max;
    int current_index;
public:
    Array(T size)
    {
        max = size;
        current_index = 0;
        arr = new T[max];
    }
    ~Array()
    {
        delete [] arr;
    }
    
    void push(T n)
    {
        arr[current_index] = n;
        current_index++;
    }
    
    T2 get()
    {
        T2 a = 2;
        return a;
    }
    
    T operator[](int index);
    
};

template<typename T, typename T2> T Array<T,T2>::operator[](int index)
{
    if(index < 0 || index > (max-1))
    {
        cout << "Wrong index" << endl;
        abort();// завершить программу АВАРИЙНО!!!!! (не пользоваться в реальной жизни)
    }
    else
    {
        return arr[index];
    }
}




/*
int main()
{
    Array<int> a(3);
    a.push(23);
    a.push(43);
    cout << a[0] << endl;
    cout << a[1] << endl;
    
    cout << a.get() << endl;
    cout << a[-1] << endl;// our abort() will be called
    
    
    return 0;
}
*/
////// ????????????? friend in template classes ?????????????
////// template queue and stack - ??
////// array<>.   #include <array> - ??