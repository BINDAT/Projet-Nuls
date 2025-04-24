#include <stdio.h>
#include <stdlib.h>
#include <dirent.h> /*Pour afficher des information du dossier*/

int main()
{
    DIR *nomdoss; /*Sert de pointeur de dossier*/
    struct dirent *file; /*sert de pointeur de fichier*/

    nomdoss = opendir("."); /*Ouvre la lecture du dossier*/
    if (nomdoss == NULL)
    {
        puts("Lecture du dossier impossible");
        exit(1);
    }
    file = readdir(nomdoss);
    printf("Nom du fichier ou dossier '%s'\n", file->d_name); /*Affiche des information du dossier et fichier*/
    closedir(nomdoss); /*Fermer la lecture du dossier*/
    return(0);
}