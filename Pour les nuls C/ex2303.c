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
        printf("%-14s %51d %s",
        file->d_name,
        (long)statisfic.st_size,
        ctime(&statisfic.st_mtime));
    }
    closedir(nomdoss);
    return(0);
}