#include <stdio.h>

#define VALEUR 55 //ici pas de ; sinon erreur. def de constance.

int main()
{
    int a;

    printf("Modulus %d:\n", VALEUR);
    for(a=0; a<30; a++); //val a dans para de la boucle for.
        printf("%d %% %d = %d\n",a,VALEUR,a%VALEUR); //prend la val de la constance et celle de a dans la boucle pour faire un modulo.
    return(0);
}