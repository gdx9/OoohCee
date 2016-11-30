#include "product.h"
#include <iostream>

using namespace std;

int main()
{
//    Product prod(1, "ASUS", "ASUS Model-1");
//    Computer comp(2, "Dell", "Dell Inspiron Model 72016", 500, 3.2);
//    Computer comp2(3, "SONY", "AS7202", 200, 3.0);
//    Printer p(4, "HP", "HP-352", true,Printer::LASER, "600dpi");
    
    for(int c; c<1000000; c++)
    {

        Product* allProducts[100];

//        allProducts[0] = new Product(1, "ASUS", "ASUS Model-1");
        allProducts[0] = new Computer(1, "ASUS", "ASUS Model-1", 500, 3.2);
        allProducts[1] = new Computer(2, "Dell", "Dell Inspiron Model 72016", 500, 3.2); 
        allProducts[2] = new Computer(3, "SONY", "AS7202", 200, 3.0);
        allProducts[3] = new Printer(4, "HP", "HP-352", true,
                Printer::LASER, "600dpi", "Do not cover it");

        for(int i=0; i<4; i++)
        {
            cout << allProducts[i]->getInfo() << endl;
        }

        for(int i=0; i<4; i++)
            delete allProducts[i];

    }
    //cin.get();
    
//    cout << comp.getInfo() << endl;
    
    
    
}