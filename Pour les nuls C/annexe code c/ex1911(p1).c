#include <stdio.h>

int main()
{
    float temps[5] = { 58.7, 62.8, 65.0, 63.3, 63.2 };
    char *jours[5] = {"Lundi","Mardi","Mercredi","Jeudi","Vendredi"};
    int index;
    for (index = 0; index < 5; index++)
    {
        printf("%s il fera %.1f\n",jours[index],temps[index]);
    }
    return(0);
}