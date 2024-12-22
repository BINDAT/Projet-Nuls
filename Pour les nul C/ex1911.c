#include <stdio.h>

int main()
{
    float temps[5] = { 58.7, 62.8, 65.0, 63.3, 63.2 };

    printf("Mardi il fera %.1f\n", temps[1]);
    printf("Vendredi il fera %.1f\n", temps[4]);
    return(0);
}