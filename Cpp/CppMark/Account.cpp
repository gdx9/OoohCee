#include "Account.h"

namespace Prog
{
    Account::Account(void)
    {
        name = "";
        id = "#0";
        balance = 12;
    }
    
    Account::Account(char *id, char *name, ui balance)
    {
        this->id = id;
        this->name = name;
        this->balance = balance;
    }
    
    char * Account::getId()
    {
        return id;
    }
    
    void Account::setId(char *id)
    {
        this->id = id;
    }
    
    char * Account::getName()
    {
        return name;
    }
    
    void Account::setName(char *name)
    {
        this->name = name;
    }
    
    ui Account::getBalance()
    {
        return balance;
    }
    
    void Account::setBalance(ui b)
    {
        this->balance = b;
    }
    
    void Account::addBalance(ui add)
    {
        this->balance += add;
    }
    
    void Account::takeMoney(ui take)
    {
        this->balance -= take;
    }
    
    Account::~Account()
    {
        
    }
}
