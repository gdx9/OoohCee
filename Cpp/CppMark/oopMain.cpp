#include <iostream>
#include <cstdlib>
#include "Account.h"

using namespace std;
using Prog::Account;

int main(int argc, char** argv)
{
    
    Account a("#234HX21", "Denis", 144);
    
//    a.setBalance(124);
//    a.setId("#23241");
//    a.setName("Denis");
    
    a.addBalance(2000000);
    a.takeMoney(288);
    
    cout << "id: " << a.getId() << '\n'
            << "name: " << a.getName() << '\n'
            << "balance: " << a.getBalance() << endl;
    
    Account *pa = &a;
    
    
    
    
    return 0;
}

