#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct filmo {
        char acteur[32];
        int annee;
        char titre[32];
    }; /*Ici la table de donnée*/
    struct filmo bond; /*Ici la structure filmo pour lire bond*/
    FILE *a007; /*La var a007 pointée de type FILE*/

    a007 = fopen("bond.db","r"); /*fopen ouvre et stock les information en lecture de bond.db avec option r*/
    if (!a007) /*En cas de problème*/
    {
        puts("SPECTRE gagne !");
        exit(1);
    }
    while (fread(&bond,sizeof(struct filmo), 1, a007))
        printf("%s\t%d\t%s\n",
            bond.acteur,
            bond.annee,
            bond.titre); /*lis les informations du fichier avec fread et bond en mémoire et les information de structure filmo et la var a007 et avec printf affiche tout*/
    fclose(a007) ;/*Ferme la lecture de fichier*/
    
    return(0);
}