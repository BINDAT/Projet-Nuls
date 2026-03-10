#include <stdio.h> // Pour le fonctionnement de printf et putchar, qui sont utilisés pour afficher du texte à l'écran et pour insérer des caractères, respectivement.

int main()
{
    int x; // Déclaration d'une variable entière nommée x.

    x = -5; // Initialisation de la variable x à -5.
    while (x <= 5) // Tant que x est inférieur ou égal à 5, le bloc de code à l'intérieur de la boucle while sera exécuté.
    {
        printf("Le saviez-vous ? Que x vaut : %d\n", x); // Affiche la chaîne de caractères "Le saviez-vous ?"
        x = x+1; // Incrémente la variable x de 1 à chaque itération de la boucle while, jusqu'à ce que x atteigne 10.
    }
    return 0; // Indique que le programme s'est terminé avec succès.
}