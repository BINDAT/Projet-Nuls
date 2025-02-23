#include <stdio.h>

int main ()//fonction principale
{
    int a, b;//création de var a et b
    float c;//création de la c

    printf("Premier entier : ");
    scanf("%d",&a);//prend la saisit de clavier pour la mettre en val de la var a
    printf("Second entier : ");
    scanf("%d",&b);//prend la saisit de clavier pour la mettre en val de la var b
    c = a/b;//prend la val des var a et b 
    printf("%d/%d = %.2f\n",a,b,c);
    return(0);
}