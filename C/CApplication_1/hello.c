#include <stdio.h>

//main()
//{
//    printf("Hello, World");
//}

/* swap: обмен местами v[i] и v[j] */
void swap(int v[], int i, int j)
{
    int temp;
    temp = v[i];
    v[i] = v[j] ;
    v[j] = temp;
}

int swapInts(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int strlen1(char *s)
{
    int n;
    
    for(n=0; *s != '\0'; s++)
        n++;
    return n;
}

int strlen2(char *s)
{
    char *p = s;
    
//    printf("\n---%d",s);
    while(*p !='\0')
        p++;
//    printf("\n---%d",p);
    return p - s;
}

void strcpy1(char *source, char *new)
{
    int i ;
    i = 0;
    while ( (new[i] = source [i]) != '\0' )
    i++;
}

void strcpy2(char *source, char *new)
{
    while( (*new = *source) != '\0'){
        new++;
        source++;
    }
}

void strcpy3(char *source, char *new)
{
    while( (*new++ = *source++) != '\0')
        ;
}

void strcpy4(char *source, char *new)
{
    while(*new++ = *source++)// проверку !='\0' можно не писать
        ;
}
/*
main()
{
    int arr[] = {1,2,3,4,2,3,1};
    
    swap(arr,4,5);
    int i;
    for(i=0;i<7;i++)
    {
        printf("%d ",arr[i]);
    }
    
    int a = 1;
    int b = 2;
    swapInts(&a, &b);
    printf("\n%d %d", a, b);
    
    char str[] = "Hello";
    printf("\nstrlen2 : %d\n", strlen2(str));
    
    /////////////////////
    char p[] = "now is the time";
    char newp[30];
    
    strcpy4(&p,&newp);
    printf("---strcpy4 new---\n");
    for(i=0;i<7;i++){
        printf("%c", p[i]);
    }
    printf("\n---");
    
    
    return 0;
}*/