#include <stdio.h>

int main()
{
    int compteur;
    compteur = 0;
     
    while (compteur > -5)
    {
            compteur--;
    }
    while (compteur <=5)
    {
        printf("%d ",compteur);
        compteur++;
    }
    putchar('\n');
    return(0);   
}