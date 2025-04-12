#include <stdio.h>
#include <stdlib.h>

int main()/*Fonction principale*/
{
    FILE *test; /*Var pointée test de typedef FILE*/

    test = fopen("blorfus", "w");/*Test créer un fichier blorfus en écriture*/
    if (!test)
    {
        puts("Création du fichier impossible");/*En cas d'impossibilité*/
        exit(1);
    }
    fclose(test);/*Ferme la création du fichier avec test si réussit*/
    puts("Fichier cree");
    if (rename("blorfus", "wambooli") == -1)/*Modifie le nom du fichier*/
    {
        puts("Impossible de renommer");/*Si cela n'est pas possible*/
        exit(1);
    }
    puts("Nom du fichier modifie");
    return(0);
}