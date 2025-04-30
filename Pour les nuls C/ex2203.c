#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fh; /*Var pointée de type FILE*/

    fh=fopen("hello.txt","w"); // Mode ecriture
    if (fh==NULL) /*En cas de pépin*/
    {
        puts("Ouverture du fichier impossible");
        exit(1);
    }
    fprintf(fh, "Je laisse une trace.\n"); /*écrit cela dans le fichier*/
    fputs("C'est mon programme qui produit ce contenu.\n",fh); /*et ceci aussi*/
    fclose(fh); /*est ferme l'écriture du fichier*/
    return(0);
}