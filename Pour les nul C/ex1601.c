#include <stdio.h>

int main ()
{
    int a, b;
    float c;

    printf("Premier entier : ");
    scanf("%d",&a);
    printf("Second entier : ");
    scanf("%d",&b);
    c = a/b;
    printf("%d/%d = %.2f\n",a,b,c);
    return(0);
}