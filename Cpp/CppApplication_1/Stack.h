#ifndef STACK_H_
#define STACK_H_

#include <iostream>
using namespace std;

#define NULL 0

// template class - class with template arguments
template<typename info_t>
class Stack 
{
    struct Node
    {
        info_t info;
        Node* prev;
    };

private:
    Node* pTop;

public:
    Stack() : pTop(NULL) {}

    void push(info_t value);

    info_t pop();

    info_t getTopValue() const;

    bool isEmpty() const;

    void printContents() const;
};

template<typename info_t>
void Stack<info_t>::push (info_t value)
{
    Node* newNode = new Node;
    newNode->info = value;
    newNode->prev = pTop;
    pTop = newNode;
}

template<typename info_t>
info_t Stack<info_t>::pop()
{
    Node* oldStk = pTop;
    info_t val = oldStk->info;
    pTop = oldStk->prev;

    delete oldStk;

    return val;
}

template<typename info_t>
info_t Stack<info_t>::getTopValue() const
{
    return pTop->info;
}

template<typename info_t>
bool Stack<info_t>::isEmpty() const
{
    return pTop == NULL;
}

template<typename info_t>
void Stack<info_t>::printContents() const
{
    const Node* node = pTop;

    while (node)
    {
        cout << node->info << ' ';
        node = node->prev;
    }
}

#endif