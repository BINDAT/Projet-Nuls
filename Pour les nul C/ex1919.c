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

    for (x=0; x<7; x++)/*Boucle d'affichage*/
        {
            putchar(**(fruits+x));/*putchar double pointeur pour fruits pour sont affiche avec
            incrémentation par la variable x de la boucle for*/
            putchar('\n');/*putchar de nouvelle ligne*/
        }
    return(0); /*renvoie de la fonction principale avec paramètre 0*/
}
/*
Observation : affichage des données incorrecte car le double pointeur
fait cibler chaque premier caractères de chaque fruits au lieu du simple qui affiche
chaque valeurs de manières complète.
*/