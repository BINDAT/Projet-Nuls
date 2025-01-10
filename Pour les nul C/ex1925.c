#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 10

void create(int *usb);
void show(int *usb);

int main()
{
    int lecteur[10];
    puts("Données stockées : ");
        create(lecteur);
    
    
    return(0);
}

void create(int *usb)
{   
    int tableau_create[TAILLE] = {0,1,3,2,4,5,6,7,8,9};
    for(int boucle = 0; boucle < TAILLE; boucle++)
    {
        usb[boucle] = tableau_create[boucle];
        printf("%d\n",tableau_create[boucle]);
    }
}

void show(int *usb)
{
    for (int boucle2 = 0; boucle2 < TAILLE; boucle2++)
    {
        ;
    }
}