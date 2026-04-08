#include <stdio.h>
#include <math.h>

int main ()
{
    float nombre, valeur, boucle;
    nombre = 2;
    boucle = 0;
    while(boucle <=10)
    {
        valeur = pow(nombre, boucle);
        printf("Nombre %2.f tour %2.f de boucle de base voici vos puissance %2.f\n",nombre, boucle ,valeur);
        boucle++;
    }
   return(0); 
}