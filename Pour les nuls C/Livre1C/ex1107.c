#include <stdio.h>

#define VALEUR 5 //ici pas de ; sinon erreur. def de constance.

int main()
{
    int a;

    printf("Modulus %d:\n", VALEUR);
    for(a=0; a<30; a++); //val a dans para de la boucle for.
        printf("%d %% %d = %d\n",a,VALEUR,a%VALEUR); //prend la val de la constance et celle de a dans la boucle pour faire un modulo.
    return(0);
}
/*
Observation : Ce code peut servir à obtenir un pourcentage sur une val de la var en const.
*/