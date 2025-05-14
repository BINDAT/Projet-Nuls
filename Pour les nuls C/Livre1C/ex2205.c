#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fh; /*Ici une var pointée type FILE pour trouver les fichiers*/

    fh=fopen("hello.txt","a"); // Mode ajout
    if (fh==NULL) /*En cas de pépin*/
    {
        puts("Ouverture du fichier impossible!");
        exit(1);
    }
    fprintf(fh, "Texte apparu plus tard\n"); /*Ajoute ceci dans le fichier*/
    fclose(fh); /*Ferme le fichier.*/
    return(0);
}