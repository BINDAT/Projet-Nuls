#include <stdio.h>

void moitier(void);//création de la fonction moitier
void doubler(void);//création de la fonction doubler

int age; //var age
float toise;//var toise

int main()//fonction principale
{
    printf("Quel est votre age ? : ");
    scanf("%d", &age);
    printf("Est votre taille ? : ");
    scanf("%f", &toise);
    moitier();//référence ou bloc d'instruction moitier
    doubler();//référence au bloc d'instruction doubler
    printf("Vous avez %d ans et mesurez %.1f.\n", age, toise);
    return(0);
}

void moitier(void)
{
    float a,h; //var a et h

    a=(float)age/2.0; //attribution des val de a avec age
    printf("La moitie de votre age est %.1f.\n", a);
    h=toise/2.0; //attribution des val de h avec toise
    printf("La moitie de votre taille est %.1f.\n",h);
}

void doubler(void)
{
    age*=2.0; //attribution de val
    printf("Le double de votre age est %d.\n", age);
    toise*=2.0;//attribution de val
    printf("La moitie de votre taille est %.1f.\n", toise);
}