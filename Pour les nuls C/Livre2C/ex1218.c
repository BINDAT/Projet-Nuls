#include <stdio.h> // pour printf et putchar

#define TAILLE 3 // nombre de présidents

int main()
{
    char president[TAILLE][8] = {
        "Sarkozy",
        "Coty",
        "Grevy"
    }; // tableau de chaînes de caractères
    int x,index; // variables d'indexation

    for (x=0; x<TAILLE; x++)
    {
        index = 0; // réinitialisation de l'index pour chaque président
        while (president[x][index] != '\0') // tant que le caractère courant n'est pas le caractère de fin de chaîne
        {
            putchar(president[x][index]); // affichage du caractère courant
            index++; // passage au caractère suivant
        }
        putchar('\n'); // saut de ligne après chaque nom
    }
    return(0);
}