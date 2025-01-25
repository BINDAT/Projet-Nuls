#include <stdio.h>

int main()/*Fonction principale*/
{
    char sample[] = "D'ou me viendra le secours?\n";/*variable sample tableau et en valeur une chaîne de caractère*/
    char *pointeur;/*Variable pointée pointeur*/

    pointeur = sample;/*pointeur prend la valeur de la variable sample*/

    while(*pointeur)/*La boucle while prend toute la valeur*/
    {
        putchar(*pointeur);/*affiche la variable pointeur*/
        pointeur++;/*Fait défiler la boucle*/
    }
    return(0);
}
/*
Observation : le résultat s'affiche correctement
*/