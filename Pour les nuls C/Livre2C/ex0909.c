#include <stdio.h> // Pour le fonctionnement de printf et putchar, qui sont utilisés pour afficher du texte à l'écran et pour insérer des caractères, respectivement.

int main()
{
    char alphabet; // déclaration d'une variable de type caractère pour stocker les lettres de l'alphabet
    for (alphabet = 'A'; alphabet <= 'Z'; alphabet++) // boucle qui s'exécute de 'A' à 'Z', en incrémentant de 1 à chaque itération
    {
        printf("%d", alphabet); // affichage de la valeur ASCII de la lettre actuelle de l'alphabet à chaque itération
    }
    putchar('\n'); // saut de ligne après l'affichage de toutes les lettres de l'alphabet
    return(0); // termine le programme et retourne 0 pour indiquer que tout s'est bien passé
}