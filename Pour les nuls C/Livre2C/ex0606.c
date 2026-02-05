#include <stdio.h> // pour printf et les autres fonctions d'entrée/sortie

#define blorf 22 // blorf est défini comme une constante entière avec la valeur 22
#define GLORKUS 16 // GLORKUS est défini comme une constante entière avec la valeur 16

int main()
{
    printf("La valeur de blorf est %d.\n",blorf); // Affiche la valeur de blorf
    printf("La valeur de blorf +16 est %d.\n",blorf + GLORKUS); // Affiche la valeur de blorf plus GLORKUS (22 + 16)
    printf("La valeur de blorf puissance 2 est %d.\n",blorf *blorf); // Affiche la valeur de blorf multipliée par elle-même (22 * 22)
}