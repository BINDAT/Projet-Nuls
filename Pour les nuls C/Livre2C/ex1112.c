
#include <stdio.h>
#include <math.h>

int main ()
{
    float nombre, valeur, boucle;
    nombre = 2;
    for (boucle = 0; boucle <=10; boucle++)
    {
        valeur = pow(nombre, boucle);
        printf("Nombre %2.f tour %2.f de boucle de base voici vos puissance %2.f\n",nombre, boucle ,valeur);
    }
   return(0); 
}