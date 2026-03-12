#include <stdio.h> // Pour le fonctionnement de printf et putchar, qui sont utilisés pour afficher du texte à l'écran et pour insérer des caractères, respectivement.

int main()
{
    int x; // Déclaration d'une variable entière nommée x.

    for(x=0; x=10; x=x+1) // Une boucle for qui initialise x à 0, puis continue tant que x est égal à 10 (ce qui est une condition incorrecte pour une boucle for), et incrémente x de 1 à chaque itération.
    {
        puts("Vous cherchiez quelque chose ?");
    }
    return(0); // Indique que le programme s'est terminé avec succès.
}