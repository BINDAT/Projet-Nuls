#include <stdio.h>

void moitier(void);
void doubler(void);

int age;
float toise;

int main()
{
    printf("Quel est votre age ? : ");
    scanf("%d", &age);
    printf("Est votre taille ? : ");
    scanf("%f", &toise);
    moitier();
    doubler();
    printf("Vous avez %d ans et mesurez %.1f.\n", age, toise);
    return(0);
}

void moitier(void)
{
    float a,h;

    a=(float)age/2.0;
    printf("La moitie de votre age est %.1f.\n", a);
    h=toise/2.0;
    printf("La moitie de votre taille est %.1f.\n",h);
}

void doubler(void)
{
    age*=2.0;
    printf("Le double de votre age est %d.\n", age);
    toise*=2.0;
    printf("La moitie de votre taille est %.1f.\n", toise);
}