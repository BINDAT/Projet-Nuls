#include <stdio.h> // Pour le fonctionnement de printf et putchar, qui sont utilisés pour afficher du texte à l'écran et pour insérer des caractères, respectivement.

int main()
{
    int x; // Déclaration d'une variable entière nommée x.

    x = 13; // Initialisation de la variable x à 13 ce qui signifie que la boucle while ne s'exécutera pas.
    while (x < 10)
    {
        puts("Le saviez-vous ?"); // Affiche la chaîne de caractères "Le saviez-vous ?"
        x = x+1; // Incrémente la variable x de 1 à chaque itération de la boucle while, jusqu'à ce que x atteigne 10.
    }
    return 0; // Indique que le programme s'est terminé avec succès.
}