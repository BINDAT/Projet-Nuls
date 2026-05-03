#include <stdio.h> // pour printf et puts

#define TAILLE 3 // nombre de présidents

int main() // fonction principale
{
    char president[TAILLE][8] = { // tableau de chaînes de caractères
        "Sarkozy",
        "Coty",
        "Grevy"
    }; // tableau de chaînes de caractères
    int x,index; // variables d'indexation

    for (x=0; x<TAILLE; x++) // boucle pour parcourir les présidents
        puts(president[x]); // affichage de chaque président avec puts, qui ajoute automatiquement un saut de ligne

    return(0); // fin de la fonction principale
}