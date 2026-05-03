#include <stdio.h> // pour printf() et puts()

#define TAILLE 5 // taille du tableau

void afficherTablo(int tablo[]); // prototype de la fonction d'affichage
void incremTablo(int tabloI[]); // prototype de la fonction d'incrémentation

int main() // fonction principale
{
    int n[] = { 1, 2 ,3, 5, 7 }; // déclaration et initialisation du tableau

    puts("Votre tableau :"); // affichage du tableau avant incrémentation
    incremTablo(n); // appel de la fonction d'incrémentation du tableau
    afficherTablo(n); // appel de la fonction d'affichage du tableau après incrémentation
    return(0); // fin du programme
}

void afficherTablo(int tablo[]) // fonction d'affichage du tableau
{
    int x; // variable de boucle

    for(x=0; x<TAILLE; x++) // boucle d'affichage du tableau
        printf("%d\t", tablo[x]); // affichage de chaque élément du tableau suivi d'une tabulation
    putchar('\n'); // saut de ligne après l'affichage du tableau
}

void incremTablo(int tabloI[]) // fonction d'incrémentation du tableau
{
    int x; // variable de boucle

    for (x=0; x<TAILLE; x++) // boucle d'incrémentation du tableau
        tabloI[x] += 1; // incrémentation de chaque élément du tableau de 1
}