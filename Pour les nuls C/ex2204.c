#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fh; /*Var type FILE pointée pour trouver les fichier*/
    char buffer[64]; /*Var char tableau limiter*/

    fh=fopen("hello.txt","r"); // Mode lecture
    if (fh==NULL) /*En cas de pépin*/
    {
        puts("Ouverture du fichier impossible!");
        exit(1);
    }
    while (fgets(buffer, 64, fh)) /*Reprend les données de buffer et de fh*/
        printf("%s",buffer);
    fclose(fh); /*Ferme le fichier cible de fh*/
    return(0);
}