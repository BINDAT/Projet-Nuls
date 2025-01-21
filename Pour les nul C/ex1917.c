#include <stdio.h>

int main()/*Fonction principale*/
{
    char *fruits[] ={/*Variable tableau pointée char fruits*/
        "melon",
        "banane",
        "poire",
        "pomme",
        "noix",
        "raisin",
        "myrtille"/*Données du tableau*/
    };
    int x;/*Variable int x*/

    for (x=0; x < 7; x++)/*putchar simple pointeur pour fruits pour sont affiche avec
    incrémentation par la variable x de la boucle for*/
        puts(fruits[x]);/*putchar de nouvelle ligne qui affiche une à une les valeurs de fruits x en tableau*/
    
    return(0);
}
/*
Observation : Affichage des données correcte.
*/