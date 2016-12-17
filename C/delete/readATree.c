#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>
#include "fileWork.h"

#define PROGRAM


PROGRAM
int main(int argc, char** argv) {

    //checkDir("/home/mnr/Downloads/text/Прата С. - Язык программирования С++. Лекции и упражнения - 2011");
    writeToFile("14.txt", "Hello, John");
    
    
    
    return (EXIT_SUCCESS);
}

