#include <stdio.h> // Pour le fonctionnement de printf et putchar, qui sont utilisés pour afficher du texte à l'écran et pour insérer des caractères, respectivement.

int main()
{
    int alpha, code; // déclaration de deux variables de type entier pour stocker les codes ASCII des lettres de l'alphabet

    for (alpha='A'; alpha <= 'G'; alpha=alpha+1) // boucle qui s'exécute de 'A' à 'F', en incrémentant de 1 à chaque itération
    {
        for (code= 1; code <=7; code=code+1) // boucle qui s'exécute de 1 à 7, en incrémentant de 1 à chaque itération
        {     
            printf("%c%d\t", alpha, code); // affichage de la lettre actuelle de l'alphabet et de son code ASCII, suivi d'une tabulation
        }
        putchar('\n'); // saut de ligne après l'affichage de toutes les lettres et de leurs codes ASCII
    }
    return(0); // termine le programme et retourne 0 pour indiquer que tout s'est bien passé
}