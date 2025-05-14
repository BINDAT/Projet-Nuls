#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fh; /*Var pointée typedef FILE qui gère le fichier*/

    fh=fopen("hello.txt","w"); /*Ici créer le fichier hello.txt en mode écriture */
    if (fh==NULL) /*En cas de pépin*/
    {
        puts("Ouverture du fichier impossible");
        exit(1);
    }
    fprintf(fh, "Je laisse une trace.\n"); /*Ce qui est écrit dedans*/
    fclose(fh); /*Fermeture du fichier*/
    return(0);
}