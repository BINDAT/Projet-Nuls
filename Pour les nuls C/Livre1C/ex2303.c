#include <stdio.h>
#include <stdlib.h>
#include <dirent.h> /*Pour lire les dossier*/
#include <time.h> /*Pour afficher les information du temps*/
#include <sys/stat.h>

int main()
{
    DIR *nomdoss;
    struct dirent *file;
    struct stat statisfic; /*Ici la structure stat statisfic montreras des information quand elle seras appelée*/
    
    nomdoss = opendir("."); /*Ouvre la lecture du dossier*/
    if (nomdoss == NULL)
    {
        puts("Lecture du dossier impossible");
        exit(1);
    }
    while(file = readdir(nomdoss))
    {
        stat(file->d_name, &statisfic);
        printf("%-14s %5ld %s",
        file->d_name,
        (long)statisfic.st_size,
        ctime(&statisfic.st_mtime)); /*Ici statisfic est appelée est montre les information de taille et de date de modification*/
    }
    closedir(nomdoss);/*Ferme la lecture du dossier*/
    return(0);
}