#include <stdio.h>
#include <math.h>

int main()
{
    float valeur;
    printf("Indiquez une valeur fractionnaire : ");
    scanf("%f", &valeur);

    printf("Racine carree: %.2f, Puissance cubique: %.2f, Arrondi par defaut: %.2f, Arrondi par exces: %.2f\n",
           sqrt(valeur), pow(valeur, 3), floor(valeur), ceil(valeur));
    return 0;
}
/*
Observation : Calcul un nombre saisi pour le l'afficher en une puissance de 10 sqrt, pow, floor, ceil. parmis ses options là. En version raccourcis.
*/
