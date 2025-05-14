#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct filmo {
        char acteur[32];
        int annee;
        char titre[32];
    }; /*Base de donnée*/
    struct filmo bond; /*Reprise de la structure de donnée*/
    FILE *a007; /*Var pointée type FILE*/

    strcpy(bond.acteur, "Sean Connery"); /*Ajout d'information*/
    bond.annee = 1962;
    strcpy(bond.titre,"Dr. No"); /*Fin d'ajout d'information*/

    a007 = fopen("bond.db","w"); /*Ouverture de session d'écriture en mode écriture en écrasement*/
    if (!a007) /*En cas de pépin*/
    {
        puts("SPECTRE gagne !");
        exit(1);
    }
    fwrite(&bond, sizeof(struct filmo), 1, a007); /*Ajout les information dans le fichier*/
    fclose(a007); /*Fermeture de session*/
    puts("Enregistrement ecrit");

    return(0);
}