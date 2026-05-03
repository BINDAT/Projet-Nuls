#include <stdio.h> // pour printf() et puts()

int main() // point d'entrée du programme
{
    char tictactoe[3][3]; // matrice à deux dimensions pour le jeu de tic-tac-toe
    int x,y; // variables de boucle pour parcourir la matrice

    /* Initialise la matrice */
        x = 0; // initialise la variable de boucle x à 0
        while(x<3) // boucle pour les lignes
        {
            y = 0; // initialise la variable de boucle y à 0
            while(y<3) // boucle pour les colonnes
            {
                tictactoe[x][y] = '.'; // initialise chaque case à un point (indiquant une case vide)
                y++; // incrémente la variable de boucle y pour passer à la colonne suivante
            }
            x++; // incrémente la variable de boucle x pour passer à la ligne suivante
        }
        tictactoe[1][1] = 'X'; // place un 'X' au centre du plateau (ligne 2, colonne 2)
    
    /* Affiche le plateau */
        puts("Une partie de Tic-Tac-Toe ?"); // affiche une question pour introduire le jeu
        x = 0; // réinitialise la variable de boucle x à 0 pour l'affichage
        while(x<3) // boucle pour afficher les lignes du plateau
        {
            y = 0; // réinitialise la variable de boucle y à 0 pour l'affichage
            while(y<3) // boucle pour afficher les colonnes du plateau
            {
                printf("%c\t", tictactoe[x][y]); // affiche la valeur de chaque case suivie d'une tabulation pour l'alignement
                y++; // incrémente la variable de boucle y pour passer à la colonne suivante
            }
            putchar('\n'); // après chaque ligne, affiche un saut de ligne pour passer à la ligne suivante
            x++; // incrémente la variable de boucle x pour passer à la ligne suivante
        }
        return(0); // indique que le programme s'est terminé avec succès
}