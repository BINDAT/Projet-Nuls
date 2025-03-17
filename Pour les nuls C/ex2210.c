#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nomfic[255];
    FILE *dumpme;
    int x,c;

    printf("Nom du fichier : ");
    scanf("%s",nomfic);
    dumpme = fopen(nomfic, "r");
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
    fclose(dumpme);
    return(0);
}