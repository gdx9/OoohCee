#include <iostream>
#include <cstdlib>
#include "Account.h"
#include "outTime.h"

using namespace std;
using Prog::Account;
using Prog::Stack1;
using Prog::Stack2;

int main(int argc, char** argv)
{
    
//    Account a("#234HX21", "Denis", 144);
    
//    a.setBalance(124);
//    a.setId("#23241");
//    a.setName("Denis");
    
//    a.addBalance(2000000);
//    a.takeMoney(288);
//    cout << "id: " << a.getId() << '\n'
//            << "name: " << a.getName() << '\n'
//            << "balance: " << a.getBalance() << endl;
//    Account *pa = &a;
    
//    Stack1 st(5);
//    for( int i{0}; !st.isStackFull(); i++)
//        st.pushToStack(i+1);
//    for( int i{0}; !st.isStackEmpty(); i++)
//        cout << st.popFromStack() << endl;
    
//    Stack2 st;
//    for( int i{0}; i<4; i++)
//        st.pushToStack(i+1);
//    for( int i{0}; i<4; i++)
//        cout << st.popFromStack() << endl;
    
    ourTime t1(4500);
    ourTime t2(2, 35, 21);
    ourTime t3;
    
    t3 = t1.operator +(t2);
    
    cout << "our time: " << t3 << endl;
    
   // t3 = t1+t2;
    
    
    return 0;
}

