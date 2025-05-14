#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fh; /*pour designer le fichier*/
    int ch; /*pour lire le contenu*/

    fh=fopen("hello.txt","r"); // Mode lecture
    if (fh==NULL) /*en cas de pépin*/
    {
        puts("Ouverture du fichier impossible");
        exit(1);
    }
    while((ch=fgetc(fh))!=EOF) /*lis tout est affiche jusqu'à la fin*/
        putchar(ch); /*affiche tout*/
    fclose(fh); /*ferme le fichier*/
    return(0);
}