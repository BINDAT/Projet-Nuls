#include <stdio.h>

int main()/*Fonction principale*/
{
    float temps[5] = { 58.7, 62.8, 65.0, 63.3, 63.2 };/*variable tableau à limite de 5 valeurs maximum qui contient des valeurs*/

    printf("Mardi il fera %.1f\n", temps[1]);/*affiche la première valeur*/
    printf("Vendredi il fera %.1f\n", temps[4]);/*affiche la quatrième valeur*/
    return(0);
}
/*
Observation : le code affiche la première valeur et la quatrième valeurs grâce aux curseurs dans les printf avec les variable temp appelées.
*/