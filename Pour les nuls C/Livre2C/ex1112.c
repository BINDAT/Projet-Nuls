#include <stdio.h>
#include <math.h>

int main ()
{
    double nombre, valeur, boucle;
    nombre = 2;
    for (boucle = 0; boucle <=10; boucle++)
    {
        valeur = pow(nombre, boucle);
printf("Voici vos puissance %2.f", valeur);
    }
   return(0); 
}