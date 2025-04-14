#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct filmo {
        char acteur[32];
        int annee;
        char titre[32];
    }; /* Création d'une structure pour s'en servir comme table de donnée*/
    struct filmo bond;
    FILE *a007; /*Var pointée de type FILE*/

    a007 = fopen("bond.db","r");/*Ici le ficher lus et grâce à fopen et a007 en stockage d'information de nom et l'option r*/
   
    if (!a007)/*Si a007 rencontre un problème de lecture*/
    {
        puts("SPECTRE gagne !");
        exit(1);
    }
    fseek(a007, sizeof(struct filmo)*1, SEEK_SET);
    fread(&bond,sizeof(struct filmo), 1, a007);/*Ici ont reprend la lecture stockée*/
        printf("%s\t%d\t%s\n",
            bond.acteur,
            bond.annee,
            bond.titre);/*Pour l'afficher ici*/
    fclose(a007);/*Fermeture de fichier ici*/
    
    return(0);
}