#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned graine;
    int r, a, b;
    printf("Indiquez une valeur pour la graine : ");
    scanf("%u", &graine);
    srand(graine);
    for (a=0; a<20; a++)
    {
        for (b=0; b<5; b++)
        {
            r=rand();
            printf("%d\t", r);
        }
        putchar('\n');
    }
    return(0);
}
/*
Observation : se code permet grâce à un nombre d'en générer automatique plusieurs de manière aléatoire.
*/
