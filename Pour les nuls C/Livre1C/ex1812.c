#include <stdio.h>

int main()
{
    int info;
    int *lecteur;
    
    info = 960;

    printf("info stock %d\n",info);
    lecteur = &info;
    printf("lecteur a %d\n",*lecteur);
    return(0);
}