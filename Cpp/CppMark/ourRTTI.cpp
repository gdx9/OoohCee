#include <iostream>
#include <cstdlib>
#include <typeinfo>

using namespace std;

class AA
{
public:
    virtual void printIt(){cout << "print A";}
    void a1(){cout << "A";}
    
};

class BB : public AA
{
public:
    virtual void printIt(){cout << "print B";}
    virtual void b1(){cout << "B";}
    
};

class CC : public BB
{
public:
    virtual void printIt(){cout << "print C";}
    virtual void b1(){cout << "C";}
    
};
/*
int main()
{
//    AA *a = new CC;
//    a->printIt();// 'print C'
    
//    CC *c;
//    c = new CC;
//    AA *a = dynamic_cast<CC*>(c);// dynamic_cast проверяет, можно ли преобразовать переменную 'c типа CC*' к классу, который у переменной 'a'(можно, потому что к родителю дочерний)
//    a->printIt();
    
//    CC *c;
//    AA *a = new AA;
//    c = dynamic_cast<AA*>(a);// dynamic_cast проверяет, можно ли преобразовать переменную 'a типа AA*' к классу, который у переменной 'c'(нельзя, потому что к дочернему родителя)
//    a->printIt();
    
//    AA* a;
//    BB* b;
//    a = new CC;
//    if(b = dynamic_cast<CC*>(a))// пытаемся преобразовать указатель 'a на CC' преобразовать к CC*
//        b->b1();// напишет 'C', ибо b1() - virtual
    
//    AA* a;
//    BB* b;
//    a = new AA;
//    if(b = dynamic_cast<CC*>(a))// вернет false, потому что нельзя привести AA* к CC*, а потом к BB*
//        b->b1();
    
    if(typeid(int) == typeid(unsigned int))// проверить куда ссылается указатель и возможно ли преобразование
        cout << "Yes";
    else
        cout << "No";
    
    typeid(int);// type_info информация о классе
    
    
    return 0;
}
*/