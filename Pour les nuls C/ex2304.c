#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <time.h>
#include <sys/stat.h>

int main()
{
    DIR *nomdoss;
    struct dirent *file;
    struct stat statisfic;
    
    nomdoss = opendir(".");
    
    if (nomdoss == NULL)
    {
        puts("Lecture du dossier impossible");
        exit(1);
    }
    while(file = readdir(nomdoss))
    {
        stat(file->d_name, &statisfic);
        printf("%-20s %5s %10ld octect %s\n", file->d_name,S_ISDIR(statisfic.st_mode) ? "[DIR]" : "[FILE]",
        (long)statisfic.st_size,
        ctime(&statisfic.st_mtime));
    }
    closedir(nomdoss);
    return(0);
}