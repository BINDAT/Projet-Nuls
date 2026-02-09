#include <stdio.h> // en-tête de la bibliothèque standard d'entrée/sortie

int main()
{
    int a, b, c;

    printf("Je vais recevoir trois caractères : ");
    a = getchar(); // lecture d'un caractère au clavier et affectation à la variable c
    b = getchar(); // lecture d'un caractère au clavier et affectation à la variable c
    c = getchar(); // lecture d'un caractère au clavier et affectation à la variable c
    
    printf("J'ai obtenu le caractère '%c', '%c', '%c'.\n", a, b, c); // affichage du caractère obtenu à l'écran
    return(0); // retour de la valeur 0 pour indiquer que le programme s'est terminé avec succès
}