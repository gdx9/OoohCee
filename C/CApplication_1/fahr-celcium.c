#include <stdio.h>
#include <stdlib.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

#define IN 1
#define OUT 0

/*
 * output fahr/celcium temperatures
 */
/*
main() {
//    int fahr, celsius;
    float fahr, celsius;
    int lower, upper,step;
    
    lower = 0;
    upper = 300;
    step = 20;
    
    fahr = lower;
    
    printf("Program starts!\n"
            "%3c%6c\n",'F','C');
    
    while(fahr <= upper) {
        celsius = 5 * (fahr-32) / 9;
//        printf("%d\t%d\n", fahr, celsius);
        printf("%3.0f\t%6.1f\n", fahr, celsius);

        fahr = fahr + step;
    }
    
    printf("\n-----------\n");
    
    celsius = upper;
    printf("%6c%3c\n",'C','F');
    
    while(celsius >= lower) {
        fahr = celsius * 9 / 5 + 32;
        
        printf("%6.1f\t%3.0f\n", celsius, fahr);
        
        celsius = celsius - step;
    }
    
    
}
*/
/*
main()
{
    int fahr;// int fahr = 0;
    
    for(fahr=LOWER; fahr<=UPPER; fahr+=STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    
    printf("\n------------\n");
    
    for(fahr=UPPER;fahr>=LOWER; fahr-=STEP)
        printf("%3d %6.1f\n",fahr,(5.0/9.0)*(fahr-32));
    
}*/
/*
// copy in to out
main()
{
    int c;
    
//    c = getchar();// попросить ввести символ
//    while(c != EOF) {
//        putchar(c);// вывести символ
//        c = getchar();
//    }
    
//    putchar (EOF);
    
    while((c = getchar()) != EOF)
        putchar(c);// вывести символ
    
//    if( (getchar() != EOF) == 0)
//        putchar('+');
//    else if( (getchar() != EOF) == 1)
//        putchar('-');
}*/

/*
main()
{
    int c, n1, nw, nc, state;
    state = OUT;
    n1 = nw = nc = 0;
    while((c = getchar()) != EOF) {
        ++nc;
        if(c == '\n')
            ++n1;
        if(c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if(state == OUT) {
            state = IN;
            ++nw;
        }
        ++nw;
    }
    printf("%d %d %d\n", n1, nw, nc);
    
}*/

