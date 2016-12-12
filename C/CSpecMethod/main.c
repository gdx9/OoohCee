#include <stdio.h>
#include <stdlib.h>

#define A 12

/*
 * 
 */

int pwr(register int m)
{
    
    //register int result = 1;
    
    while(m > 10)
    {
        --m;
    }
    
    return m;
}

int main(int argc, char** argv) {
    
//    register int n = 10000000;
//    int a = pwr(1000);
//    printf("%d",a);
    
//    int i = 0;
//    int a = 1;
//    while( a <= 5)
//    {
//        for( i=0; i < a; i++)
//        {
//            putchar('*');
//        }
//        putchar('\n');
//        a++;
//    }
//    fflush(stdin);
//    char b[20];
//    gets(b);// WARNING ? O_o
//    puts(b);
    
//    printf("%d\n", sizeof(double*));
//    printf("%d\n", sizeof(double));
    
    for(int i=0; i<1000000; i++){
        
        char *name = (char *) malloc(sizeof(char)*1000);
        
        if(name != NULL)
        {
            name[0] = 'J';
            name[1] = 'O';
            name[2] = 'H';
            name[3] = 'N';
            name[1] = '\0';
            
            free(name);
            name = NULL;
        }else{
            printf("fail");
            exit(-1);
        }
        printf("%d", i);
    }
    
    
    
    return (EXIT_SUCCESS);
}


