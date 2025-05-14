#include <stdio.h>

int score[4];//Création de score avec sa limite

int main(){
    printf("Écrivez vos scores: ");
    for (int boucle = 0; boucle < 4; boucle++)/*Créer une boucle qui se répète 4 fois*/ {
        scanf("%d", &score[boucle]);//prend l'entrée du clavier est la mets dans score avec comme curseur boucle
    }

    puts("Voici vos scores");

    for (int boucle = 0; boucle < 4; boucle++)/*Créer une boucle qui se répète 4 fois*/ {
        printf("#%d\n", score[boucle]);//affiche les entrées du clavier est affiche leurs position avec le curseur.
    }

    return(0);
}
