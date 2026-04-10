#include <stdio.h>

int main()
{
 float degres,radians;

 printf("Indiquez un angle en radians : ");
 scanf("%f", &radians);
 degres = radians*(180.0/ 3.14159265358979323846); //radians sers de recipient à calcul en prenant une val fixe est une en mémoire
 printf("%.2f radians valent %.2f degres.\n", radians,degres);
 return(0);
}
/*
Observation : Ce code convertis les radians en degres d'angles.
*/ 
