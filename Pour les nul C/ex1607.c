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
    printf("Vous avez %d ans et mesurez %.1f.\n", age, toise);
    return(0);
}