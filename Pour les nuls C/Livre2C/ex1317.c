#include <stdio.h> // pour getchar() et putchar()

int main()
{
    char i; // i est de type char pour stocker les caractères saisis

    do
    {
        i = getchar(); // lire un caractère depuis l'entrée standard (clavier)
        putchar(i); // afficher le caractère lu à l'écran
    } while (i != '.'); // continuer à lire et afficher les caractères jusqu'à ce que le caractère '.' soit saisi
    
    putchar('\n'); // ajouter une nouvelle ligne après la boucle pour une meilleure lisibilité
    return(0);
}