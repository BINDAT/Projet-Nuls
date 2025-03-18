#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char nomfic[256];
    FILE *dumpme;
    int x,c; 
    
    
    printf("Nom du fichier : ");
    
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