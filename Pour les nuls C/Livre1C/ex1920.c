#include <stdio.h>

int main()/*Fonction principale*/
{
    char *fruits[] ={
        "melon",
        "banane",
        "poire",
        "pomme",
        "noix",
        "raisin",
        "myrtille"/*Données du tableau*/
    };
    int x,y;/*Variable int x et y*/

    for(x=0; x<7; x++)/*Boucle d'incrémentation de x*/
        {
            for (y=0; fruits[x][y]; y++)/*Boucle d'affichage et d'affichage de y*/
            {
                putchar((fruits[x][y]));/*putchar qui gère l'affichage tableau en deux parties x et y incrémenter par les boucles*/
            }
            putchar('\n');/*putchar de nouvelle ligne*/
        }
    return(0);
}
/*
Observation : affichage correct des données par la gestion du tableau 
en deux parties et les deux boucles for
*/