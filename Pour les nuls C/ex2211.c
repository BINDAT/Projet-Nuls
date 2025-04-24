#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) /*Prend les arguments ici*/
{
    char nomfic[256]; /*Ici la var char pour fichier*/
    FILE *dumpme; /*Contenu*/
    int x,c; /*Boucle est contenus*/
    
    
    printf("Nom du fichier : ");
    
    dumpme = fopen(nomfic, "r"); /*ouvre la lecture du fichier choisi*/
    if (!dumpme)
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