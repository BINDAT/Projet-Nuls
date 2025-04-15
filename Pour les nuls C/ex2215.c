#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct filmo {
        char acteur[32];
        int annee;
        char titre[32];
    }; /*Création d'une structure pour s'en servir comme table de donnée*/
    struct filmo bond;
    FILE *a007; /*Var pointée type FILE*/
    int count = 0; /*Pour la boucle de lecture*/

    a007 = fopen("bond.db","r");/*Lecture du fichier grâce à fopen et a007 pour la mémoire et l'option r*/
    if (!a007)/*En cas de soucis de lecture du fichier*/
    {
        puts("SPECTRE gagne !");
        exit(1);
    }
    while (fread(&bond,sizeof(struct filmo), 1, a007))
        {
            printf("%s\t%d\t%s\n",
                bond.acteur,
                bond.annee,
                bond.titre);
            if (ftell(a007)> sizeof(struct filmo)) /*Retourne la position actuelle*/
                rewind(a007); /*Réinitialise la position du pointeur*/
            count++;
            if(count>10) break;
        }/*Boucle de lecture pour afficher ici plusieurs acteur année et titre de films*/
    fclose(a007);/*Fermeture de lecture du fichier*/
    
    return(0);
}