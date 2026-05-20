#include <stdio.h> //pour printf et scanf

#define taille 4 //taille du tableau

int main()
{
    char *President[][2]= 
    {
        {"George", "Washington"}, 
        {"John", "Adams"}, 
        {"Thomas", "Jefferson"},
        {"James", "Monroe"}
    }; //tableau de 4 lignes et 2 colonnes
    for (int boucle = 0; boucle < taille; boucle++)
    {
        printf("%-10s %s\n",President[boucle][0],President[boucle][1]); //affiche les prénoms et noms des présidents
    }
    return(0); //fin du programme
}