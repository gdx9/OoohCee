#include "fileWork.h"

void checkDir(char *path)
{
    DIR *dir = opendir(path);
    
    if(dir != NULL)
    {
        //if it's a dir
        struct dirent *inDir;
        printf("---dirname: %s\n", path);
        while(inDir = readdir(dir))
        {
            char *tmp = inDir->d_name;
            if(strcmp(tmp,".") != 0 && strcmp(tmp,"..") != 0)
                puts(tmp);
            //checkDir(inDir->d_name);
        }
        closedir(dir);
    }
    else
    {
        // if it's a file
        puts(path);
    }
}

void writeToFile(char *name, char *text)
{
    char path[900];
    strcat(path, "/home/mnr/Downloads/");
    strcat(path, name);
    
    FILE *file = fopen(path, "w");
    if(NULL == file){
        puts("bad");
    }else{
        fputs(text,file);
    }
}
