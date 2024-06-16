#include <stdio.h>
#include <math.h>

int main()
{
 float resultat, valeur;

 printf("Indiquee une valeur fractionnaire : ");
 scanf("%f", &valeur);
 resultat = sqrt(valeur);
 printf("Racine carree de %.2f = %.2f\n",valeur,resultat);
 resultat = pow(valeur,3);
 printf("%.2f puissance cubique = %.2f\n",valeur,resultat);
 resultat = floor(valeur);
 printf("Arrondi par defaut de %.2f ) %.2f\n",valeur,resultat);
 resultat = ceil(valeur);
 printf("Arrondi par exces de %.2f = %.2f\n",valeur,resultat);
 return(0);
}
/*
Observation : Calcul un nombre saisi pour le l'afficher en une puissance de 10 sqrt, pow, floor, ceil. parmis ses options là.
*/
/*
Solution probleme Math.h : aller dans le task.json et partis argument ajouter "-lm" pour lier la bibliotheque libm correctement
*/