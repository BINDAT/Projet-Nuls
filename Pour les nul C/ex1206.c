#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    float tabBourseFin [] = {};
    float données [5] = {140450.06,14458.62,14539.14,14514.11,14452.06};
    tabBourseFin = données;
    for (int boucle =1; boucle <=5; boucle++)
    {
        printf("Jour %d: %f\n",boucle,tabBourseFin);
    }
    return(0);
}