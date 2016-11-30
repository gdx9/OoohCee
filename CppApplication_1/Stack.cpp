#include <iostream>
#include "Stack.h"
// #include <stack>// default stack library

using namespace std;

int main()
{
    Stack<char> stack;

    stack.push('a');
    stack.push('b');
    stack.push('c');

    stack.printContents();


    cin.get();
}
