#include <stdio.h> // pour printf() et puts()

int main() // point d'entrée du programme
{
    char tictactoe[3][3][3]; // matrice à trois dimensions pour le jeu de tic-tac-toe
    int x,y,z; // variables de boucle pour parcourir la matrice

    /* Initialise la matrice */
        for (x= 0; x<3; x++) // boucle pour les lignes
            for (y=0; y<3; y++) // boucle pour les colonnes
                for (z=0; z<3; z++) // boucle pour les niveaux
                    tictactoe[x][y][z] = '.'; // initialise chaque case à un point (indiquant une case vide)
        tictactoe[1][1][1] = 'X'; // place un 'X' au centre du plateau (niveau 2, ligne 2, colonne 2)
    
    /* Affiche le plateau */
        puts("Une partie de Tic-Tac-Toe ?"); // affiche une question pour introduire le jeu
        for (z=0; z<3; z++) // boucle pour afficher chaque niveau du plateau
        {
            printf("Niveau %d\n",z+1); // affiche le numéro du niveau (1, 2 ou 3)
            for (x=0; x<3; x++) // boucle pour afficher les lignes du niveau
            {
                for(y=0; y<3; y++) // boucle pour afficher les colonnes du niveau
                    printf("%d\t", tictactoe[x][y][z]); // affiche la valeur de chaque case suivie d'une tabulation pour l'alignement
                putchar('\n'); // après chaque ligne, affiche un saut de ligne pour passer à la ligne suivante
            }
        }
        return(0); // indique que le programme s'est terminé avec succès
}