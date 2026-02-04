#include <stdio.h> // pour printf et les autres fonctions d'entrée/sortie

#define blorf 22 // blorf est défini comme 22, mais le symbole de division (/) est présent après le nombre, ce qui peut causer des problèmes lors de l'utilisation de blorf dans des expressions.

int main()
{
    printf("La valeur de blorf est %d.\n",blorf); // Affiche la valeur de blorf, qui est 22.
    printf("La valeur de blorf +16 est %d.\n",blorf + 16); // Affiche la valeur de blorf plus 16, ce qui est 38.
    printf("La valeur de blorf puissance 2 est %d.\n",blorf *blorf); // Affiche la valeur de blorf multipliée par elle-même, ce qui est 484.
}