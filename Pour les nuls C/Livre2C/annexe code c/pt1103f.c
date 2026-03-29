#include <stdio.h> //bibliothèque pour gerer l'affichage

int main() // fonction principale
{
    int boucle = -5; // déclaration de la variable et sa valeur

    for(boucle = -5; boucle < 5; boucle++, printf("%d\t", boucle)); // une boucle qui utilise la variable
    for(;boucle > -5; boucle--, printf("%d\t",boucle));
    
    return 0;
}