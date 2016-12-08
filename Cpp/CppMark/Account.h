#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>

namespace Prog
{
    typedef unsigned int ui;
    class Account
    {
    private:
        char *id;
        char *name;
        ui balance;
    public:
        Account(void);
        Account(char *id, // при char *id="#0" Account(void) вызываться никогда не будет(кроме как при создании массива)
            char *name="", ui balance=0);
        char* getId();
        void setId(char *);
        char* getName();
        void setName(char *);
        ui getBalance();
        void setBalance(ui);
        void addBalance(ui add);
        void takeMoney(ui take);
        
        ~Account();
    };
    
    class Stack1
    {
    private:
        int *arr;
        int Max;
        int index;
    public:
        Stack1(int num)
        {
            Max = 1000;
            index = 0;
            if(num <= Max)
            {
                arr = new int[num];
                Max = num;
            }
            else
                std::cout << "num is too big";
        }
        
        ~Stack1()
        {
            delete [] arr;
        }
        
        bool pushToStack(int n)
        {
            if(index == Max)
                return false;
            else
            {
                arr[index] = n;
                index++;
                return true;
            }
        }
        
        int popFromStack()
        {
            if(index < 0)
                return 0;// в реальности не делать так
            else
            {
                return arr[--index];
            }
        }
        
        bool isStackEmpty()
        {
            if(index <= 0)
                return true;
            else
                return false;
        }
        
        bool isStackFull()
        {
            if(index == Max)
                return true;
            else
                return false;
        }
        
    };
    
    struct Stek
    {
        int key;
        Stek *next;
    };
    
    class Stack2
    {
    private:
        Stek *next;
    public:
        Stack2(){};
        
        void pushToStack(int d)
        {
            Stek *pv = new Stek;
            pv->key = d;
            pv->next = next;
            next = pv;
        }
        
        int popFromStack()
        {
            int temp = next->key;
            Stek *pv = next;
            
            next = next->next;
            delete pv;
            return temp;
        }
        
    };
}


#endif /* ACCOUNT_H */

