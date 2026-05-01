#include <stdio.h> // pour printf() et puts()

int main()
{
    char tictactoe[3][3]; // un tableau à deux dimensions de caractères
    int x,y; // des variables pour les boucles

    /* Initialise la matrice */
        for (x= 0; x<3; x++) // pour chaque ligne
            for (y=0; y<3; y++) // pour chaque colonne
                tictactoe[x][y] = '.'; // on remplit la matrice de points
        tictactoe[1][1] = 'X'; // on place un X au centre
    
    /* Affiche le plateau */
        puts("Une partie de Tic-Tac-Toe ?");
        for (x=0; x<3; x++) // pour chaque ligne
        {
            for(y=0; y<3; y++) // pour chaque colonne
                printf("%c\t", tictactoe[x][y]); // on affiche le caractère suivi d'une tabulation
            putchar('\n'); // on affiche un retour à la ligne après chaque ligne du plateau
        }
        return(0); // on retourne 0 pour indiquer que le programme s'est terminé avec succès
}