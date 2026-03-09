#include <stdio.h> // Pour le fonctionnement de printf et putchar, qui sont utilisés pour afficher du texte à l'écran et pour insérer des caractères, respectivement.

int main()
{
    int alpha; // Déclaration d'une variable entière nommée alpha.
    for (alpha = 'A'; alpha <= 'Z'; alpha++)
    {
        for (alpha = 'A'; alpha <= 'Z'; alpha++)
        {
            for (alpha = 'A'; alpha <= 'Z'; alpha++)
            {
                printf("%c%c%c\t", alpha,alpha,alpha); // Affiche le caractère correspondant à la valeur de alpha.
            }
        }        
    }
    
    putchar('\n'); // saut de ligne après l'affichage de toutes les lettres
    return 0; // Indique que le programme s'est terminé avec succès.
}