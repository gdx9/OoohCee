#ifndef ACCOUNT_H
#define ACCOUNT_H

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
        Account(char *id="#0", char *name="", ui balance=0);
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
}

#endif /* ACCOUNT_H */

