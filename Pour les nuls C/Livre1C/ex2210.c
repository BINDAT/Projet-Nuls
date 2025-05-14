#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nomfic[255]; /*Ici la var char pour fichier*/
    FILE *dumpme; /*Contenu*/
    int x,c; /*Boucle est contenus*/

    printf("Nom du fichier : ");
    scanf("%s",nomfic); /*Prend la saisit de la clavier*/
    dumpme = fopen(nomfic, "r"); /*ouvre la lecture du fichier choisi*/
    if (!dumpme) /*En cas de problème*/
    {
        printf("Ouverture impossible de '%s'\n", nomfic);
        exit(1);
    }
    x=0;
    while ((c=fgetc(dumpme))!= EOF)
    {
        printf("%02X",c);
        x++;
        if (!(x%16))
            putchar('\n');   
    }
    putchar('\n');
    fclose(dumpme); /*Ferme la lecture du fichier*/
    return(0);
}