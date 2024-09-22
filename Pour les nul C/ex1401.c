#include <stdio.h>

int main()
{
    struct joueur {
        char nomj[32];
        int scoremax;
    };
    
    struct joueur xbox;

    printf("Nom du joueur : ");
    scanf("%s", xbox.nomj);
    printf("Meilleur score : ");
    scanf("%d", &xbox.scoremax);

    printf("Meilleur score de %s : %d\n", xbox.nomj, xbox.scoremax);
    
    return(0);
}
/*
Obersevation : Ce code affiche les données cibles de la structure. Ses données sont entrées par ciblage des critères pour les faires correspondres à une valeur.
*/