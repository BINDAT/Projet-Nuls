#include <stdio.h> //bibliothèque pour gerer l'affichage

int main() // fonction principale
{
    int boucle = 0; // déclaration de la variable et sa valeur

    while(boucle <= 10) // une boucle qui utilise la variable
    {
        puts("Ne marchez pa sur ma pelouse!");
        boucle++; // incrémentation de la boucle
    }
    return 0;
}