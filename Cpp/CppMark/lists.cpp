#include <cstdlib>
#include <iostream>


using namespace std;

struct A
{
    int key;
};

struct List
{
    A a;
    List *next;
};

void printList(List *b);
void initList(List **begin);
void addBegin(List **begin, const A &a);
void insertToMid(List **begin, const A &a);
void deleteList(List **begin, const A&a);
void freeList(List **begin);
/*
int main()
{
    List *begin = NULL;
    A a = {-12};
    
    initList(&begin);
    printList(begin);
    addBegin(&begin, a);
    printList(begin);
    
    return 0;
}
*/
void printList(List *b)
{
    List *print = b;
    
    while(print)
    {
        cout << print->a.key << " -> ";
        print = print->next;
    }
    cout << "NULL\n";
}

void initList(List **begin)
{
    *begin = new List;
    
    A a[5] = {43,56,42,11,324};
    
    (*begin)->a.key = 20;
    (*begin)->next = NULL;
    
    List *end = *begin;
    
    for(int i{0}; i<5; i++)
    {
        end->next = new List;
        end = end->next;
        end->a = a[i];
        end->next = NULL;
    }
}

void addBegin(List **begin, const A &a)
{
    List *t = new List;
    t->a = a;
    t->next = *begin;
    
    *begin = t;
}

void insertToMid(List **begin, const A &a)
{
    List *ins = new List;
    ins->a = a;
    
    if(*begin == NULL)
    {
        ins->next = NULL;
        *begin = ins;
        return;
    }
    
    List *t = *begin;
    
    if(t->a.key > ins->a.key)
    {
        ins->next = t;
        *begin = ins;
        return;
    }
    
    List *t1 = t->next;
    
    while(t1)
    {
        if(t->a.key < ins->a.key  && ins->a.key <= t1->a.key)
        {
            t->next = ins;
            ins->next = t1;
            return;
        }
        t = t1;
        t1 = t1->next;
    }
    
    t->next = ins;
    ins->next = NULL;
}

void deleteList(List **begin, const A&a)
{
    if(*begin==NULL)
    {
        return;
    }

    List *t = *begin;
    if(t->a.key == a.key)
    {
        *begin = t->next;
        delete t;
        return;
    }

    List *t1 = t->next;

    while(t1)
    {
        if(t1->a.key == a.key)
        {
            t->next = t1->next;
            delete t1;
            return;
        }
        t = t1;
        t1 = t1->next;
    }

}

void freeList(List **begin)
{
    if(*begin == 0) return;
    List *p = *begin;
    List *t;

    while(p)
    {
        t = p;
        p = p->next;
        delete t;
    }
    *begin = NULL;
}