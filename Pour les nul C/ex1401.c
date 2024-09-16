#include <stdio.h>

int main()
{
    struct joueur;
    {
        char nomj [32];
        int scoremax;
    };
    struct joueur xbox;

    printf("Nom du joueur : ");
    scanf("%s", xbox.scoremax);
    printf("Meilleur score : ");
    scanf("%d", &xbox.scoremax);

    printf("Meilleur score de %s : %d\n", xbox.nomj, xbox.scoremax);
    return(0);
}