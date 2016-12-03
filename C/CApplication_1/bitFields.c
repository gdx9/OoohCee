#include <stdio.h>

#include <stdlib.h>

struct Employee{
    int age;
    char *name;
    unsigned int is_young: 3;// очень зависит от системы
    unsigned int is_male: 1;
} f;

main()
{
    f.is_young = 7;
    
    printf("%i", f.is_young);
}
