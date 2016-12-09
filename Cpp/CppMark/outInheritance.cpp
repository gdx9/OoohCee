#include <iostream>
#include <cstdlib>

using namespace std;

class A
{
public:
    void showA(){cout << "A";}
};

// Всегда при создании дочернего класса будет вызван конструктор родительского!!
// То есть, если у нас будет конструктор с аргументом и не будет по-умолчанию,
// то придется делать явные конструкторы для дочернего и в нем вызывать через ":"
// коструктор родителя с аргументами

class B : private A// все, что было у родителя в public и protected - будет здесь в !!private!!
{
public:
    void showB(){
        cout << "B";
        A::showA();
    }
};

class C : public B// все, что было у родителя в public - будет здесь в !!private!!
{
public:
    void showC(){
        cout << "C";
    }
};

class D : protected A// все, что было у родителя в public и protected - будет здесь в !!protected!!
{
public:
    void showD(){
        cout << "D";
    }
};

/////////////////////////////
/////////////////////////////
// polymorphism
class Q
{
public:
    virtual void show(){cout << "Q";}
};

class T : public Q
{
public:
    virtual void show(){cout << "T";}// без virtual мы бы по указателю родителя вызывали ЕГО метод (Q *pq; pq.show() - писало бы "Q")
};

//////////////////////////////

class P
{
    int *p;
public:
    P(){p = new int[10]; cout << "Constructor P" << endl;}
    virtual ~P(){delete [] p; cout << "Destructor P" << endl;}// без virtual "P *o = new O[1];" при последующем удалении будет вызван диструктор ТОЛЬКО родительского класса
};

class O : public P
{
    int *p;
public:
    O(){p=new int[10]; cout << "Constructor O" << endl;}
    virtual ~O(){delete [] p; cout << "Destructor O" << endl;}// без virtual "P *o = new O[1];" при последующем удалении будет вызван диструктор ТОЛЬКО родительского класса
};

/*
int main()
{
//    B b;
//    b.showB();
//    cout << endl;
//    ////////
//    
//    T t;
//    Q *pq = NULL;// = NULL - по стандарту
//    pq = &t;
//    pq->show();
//    cout << endl;
//    ////
//    
//    Q q;
//    Q *pq2 = new Q[2];
//    // если делать pq2[0]=q;pq2[1]=t; ТО ОНИ ОБА БУДУТ Q, потому что мы инициализируем ЗНАЧЕНИЯМИ.
//    pq2 = &q;// а здесь - адресом
//            pq2->show();
//    pq2++;
//    pq2 = &t;
//            pq2->show();
    
    P *o = new O[1];
    
    delete[] o;
    
    
    return 0;
}
*/