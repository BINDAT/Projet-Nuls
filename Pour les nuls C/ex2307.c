#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *test;

    test = fopen("blorfus", "w");
    if (!test)
    {
        puts("Création du fichier impossible");
        exit(1);
    }
    fclose(test);
    puts("Fichier cree");
    if (rename("blorfus", "wambooli") == -1)
    {
        puts("Impossible de renommer");
        exit(1);
    }
    puts("Nom du fichier modifie");
    return(0);
}