#include <stdio.h>

int main()
{
 float degres,radians;

 printf("Indiquez un angle en radians : ");
 scanf("%f", &degres);
 degres = 0.0174532925*radians;
 printf("%.2f radians valent %.2f degres.\n", radians,degres);
 return(0);
}