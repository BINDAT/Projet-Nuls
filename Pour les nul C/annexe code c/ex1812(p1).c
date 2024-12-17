#include <stdio.h>

int main()
{
    int info;
    int *lecteur;
    
    lecteur = &info;
    *lecteur = 960;
    printf("info stock %d\n",info);
    printf("lecteur a %d\n",*lecteur);
    
    return(0);
}