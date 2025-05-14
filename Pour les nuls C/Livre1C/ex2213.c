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
    struct filmo bond; /*Appelle de la structure avec bond en affection*/
    FILE *a007; /*var de pointée de type FILE*/

    strcpy(bond.acteur, "Roger Moore"); /*Ici ajout du nom d'acteur*/
    bond.annee = 1973; /*Ici de l'année*/
    strcpy(bond.titre,"Live and Let Die"); /*Est la du titre du film*/
    
    a007 = fopen("bond.db","a"); /*Ouvre ici le fichier en mode ajout sans effacement de l'écriture précédente*/
       
        if (!a007) /*En cas de problème*/
        {
            puts("SPECTRE gagne !");
            exit(1);
        }
        fwrite(&bond, sizeof(struct filmo), 1, a007); /*Reprend le fichier pour une nouvelle écriture*/
    
    strcpy(bond.acteur, "Pierce Brosnan"); /*Rajoute de nouvelle ici*/
    bond.annee = 1995;
    strcpy(bond.titre,"GoldenEye");
    
    fwrite(&bond, sizeof(struct filmo), 1, a007); /*A là*/
    fclose(a007); /*Fermeture du fichier est fin d'écriture*/
    puts("Enregistrement ecrit");

    return(0);
}