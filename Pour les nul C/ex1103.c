#include <stdio.h>

int main()
{
    int compteur; 

    for(compteur =-5; compteur <5; compteur++)
    {
        printf("%d ", compteur);
    }
    for(; compteur >=5; compteur--)
    {
        printf("%d ",compteur);
    }
    putchar('\n');
    return(0);
}