#include <stdio.h>
#include <stdlib.h>


struct LinkedList
{
    int val;
    
    struct LinkedList *prev;
    struct LinkedList *next;
};


int main()
{
    struct LinkedList *myList;
    
    struct LinkedList l1;
    l1.val = 12;
    struct LinkedList l2;
    l2.val = 14;
    l1.next = &l2;
    
    printf("%d", l1.next->val);
    
    return EXIT_SUCCESS;
}

