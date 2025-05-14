#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <time.h>
#include <sys/stat.h>

int main()
{
    DIR *nomdoss; /*Var pointée de type DIR*/
    struct dirent *file; /*Création d'une structure qui rejoint sur une var pointée avec fonction dirent pour accéder au fichier est dossier*/
    struct stat statisfic; /*Création d'une structure sur une var simple et stat pour faire des statiques*/
    
    nomdoss = opendir("."); /*Ouvre le dossier ici et le retient dans la var*/
    
    if (nomdoss == NULL)
    {
        puts("Lecture du dossier impossible");
        exit(1);
    }
    while(file = readdir(nomdoss))/*Ici la boucle affiche les infos du dossier*/
    {
        stat(file->d_name, &statisfic);/*Prend le nom du dossier pour le mettre en mémoire dans la var*/
        printf("%-20s %5s %10ld octect %s\n", file->d_name,S_ISDIR(statisfic.st_mode) ? "[DIR]" : "[FILE]",
        (long)statisfic.st_size,
        ctime(&statisfic.st_mtime));/*Affiche le nom la mémoire la date de modification et le type entre dossier et fichier*/
    }
    closedir(nomdoss);/*Ferme l'exploration du chemin d'accès*/
    return(0);
}