#include <iostream>

using namespace std;

class Person
{
public:
    string name;
    string gender;
    
    Person(string name, string gender = "male");
    virtual void sayHello();
    virtual void showParams();
    
};

Person::Person(string name, string gender)
{
    this->name = name;
    this->gender = gender;
}

void Person::sayHello()
{
    cout << "Hello" << endl;
}

void Person::showParams()
{
    cout << "name: " << name << '\n'
            << "gender: " << gender << endl;
}

class Worker : Person
{
public:
    const int id;
    
    Worker(string name, string gender, int id, string profession);
    string profession;
    void sayHello();
    
    int getId() const// this method can't change variable
    {
        return id;
    }
};

Worker::Worker(string name, string gender, int id, string profession):
    Person(name, gender),
    id(id)
{
    this->profession = profession;
}

void Worker::sayHello()
{
    Person::sayHello();
}

////////////
void makeElemsBigger(int* const array, int size)
{
    for(int i=0;i<size; i++)
    {
        array[i] += 101;
    }
}
void showArrElems(const int* const array, int size)
{
    for(int i=0;i<size;i++)
    {
        cout << array[i] << ' ';
    }
    cout << endl;
}
/*
int main()
{
    /*
    Worker peter("Peter", "male", "miller");

    peter.sayHello();
    cout << peter.profession;
    
    Person john("John");
    john.sayHello();
    */
 /*   
    int intArray[8] = {1,2,3};
    
    int arrLen = sizeof(intArray)/sizeof(int);
    cout << "before: ";
    showArrElems(intArray,arrLen);
    
    makeElemsBigger(intArray,arrLen);
    cout << "after: ";
    showArrElems(intArray,arrLen);
    
    return 0;
}*/
