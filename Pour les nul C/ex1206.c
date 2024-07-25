#include <stdio.h>

struct tabBourse
{
   float *tabBourseFin;
};

int main(void)
{ 
    float donnee [] = {140450.06,14458.62,14539.14,14514.11,14452.06};
    for (int boucle =1; boucle <=5; boucle++)
    {
        float tabBourseFin;
        printf("Jour %d: %f\n",boucle,tabBourseFin);
    }
    return(0);
}
