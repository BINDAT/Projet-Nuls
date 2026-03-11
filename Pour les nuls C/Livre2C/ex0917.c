#include <stdio.h> // Pour le fonctionnement de printf et putchar, qui sont utilisés pour afficher du texte à l'écran et pour insérer des caractères, respectivement.

int main()
{
    int fibo, nacci;// Déclaration de deux variables entières nommées fibo et nacci.

    fibo = 0; // Initialisation de la variable fibo à 0.
    nacci = 1; // Initialisation de la variable nacci à 1.

    do
    {
        printf("%d ", fibo); // Affiche la valeur actuelle de fibo suivie d'un espace.
        fibo = fibo+nacci; // Met à jour la valeur de fibo en lui ajoutant la valeur actuelle de nacci.
        printf("%d ", nacci); // Affiche la valeur actuelle de nacci suivie d'un espace.
        nacci = fibo-nacci; // Met à jour la valeur de nacci en lui soustrayant la valeur actuelle de nacci de la nouvelle valeur de fibo.
    } while (fibo < 300); // La boucle do-while continue tant que la valeur de nacci est inférieure à 300.
    putchar('\n'); // Insère un saut de ligne après la fin de la boucle do-while pour améliorer la lisibilité de la sortie.
    return 0; // Indique que le programme s'est terminé avec succès.
}