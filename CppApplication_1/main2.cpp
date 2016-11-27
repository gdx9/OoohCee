#include <iostream>
#include <string.h>

using namespace std;

enum Status {ORDINARY, PATRON, VIP};

class PS_Student
{
private:
    int id;
    char name[151];
    Status status;
    int discountsCnt;
    int* discounts;
    
public:
    
    int getId()
    {
        return id;
    }
    
    void setId(int id){
        this->id = id;
    }
    
    const char* getName()
    {
        return name;
    }
    
    void setName(char* newName)
    {
        strncpy(this->name, newName, 150);
        this->name[150] = '\0';
    }
    
    void addDiscount(int discountValue)
    {
        ExpandDiscountsArray();

        this->discounts[this->discountsCnt] = discountValue;
        this->discountsCnt++;
    }
    
private:
    void ExpandDiscountsArray()
    {
        int* newDiscounts = new int[this->discountsCnt + 1];// создаем массив на 1 больше прежнего
        
        memcpy(newDiscounts, this->discounts, this->discountsCnt*sizeof(int));
        delete[] this->discounts;
        this->discounts = newDiscounts;
    }
    
    friend void printStudentInfo(PS_Student& st);
    
};
///   .;->;.*;->*;::;new ;.abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVXYZ

void printStudentInfo(PS_Student& st)
{
    cout << "Id:       " << st.getId() << endl;
    cout << "Name:     " << st.getName() << endl;
    cout << "Discounts: ";
    for(int i=0; i<st.discountsCnt; ++i)
            cout << st.discounts[i] << '%' << ' ';
    cout << endl;
}

/*
int main()
{
    PS_Student ada;
    
    ada.addDiscount(30);
    ada.addDiscount(50);
    
    printStudentInfo(ada);
    
    cout << "AAAAAAAAAAAAAAAAAAAAAAA";
    
    return 0;
}*/