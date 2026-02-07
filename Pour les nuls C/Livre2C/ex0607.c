#include <stdio.h> // en-tête de la bibliothèque standard d'entrée/sortie

int main()
{
    unsigned int ono; // déclaration d'une variable de type entier non signé (unsigned int) nommée ono pour stocker une valeur entière positive

    ono -= 10; // soustraction de 10 à la variable ono. Comme ono n'a pas été initialisée, elle contient une valeur indéterminée. En soustrayant 10, on peut obtenir une valeur très grande en raison du comportement de l'entier non signé (unsigned int) qui "enroule" autour de zéro lorsqu'il atteint sa limite inférieure.
    printf("La valeur de ono est %u.\n", ono); // affichage de la valeur de ono en utilisant le format %u pour les entiers non signés. La valeur affichée peut être très grande en raison de l'enroulement mentionné précédemment.
    return(0); // retour de la fonction main avec une valeur de 0, indiquant que le programme s'est terminé avec succès
}