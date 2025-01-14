#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 10

void create(int *usb);
void show(int *usb);

int main()
{
    int usb[TAILLE];
    /*puts("Données stockées : "); Test*/
        create(usb);
    puts("Données choisies : ");
        show(usb);
    
    return(0);
}

void create(int *usb)
{   
    
    for(int boucle_create = 0; boucle_create < TAILLE; boucle_create++)
    {
        usb[boucle_create] = rand()%10;
        /*printf("%d\t",usb[boucle]); Test*/
    }
}

void show(int *usb)
{
    for (int boucle_show = 0; boucle_show < TAILLE; boucle_show++)
    {
       printf("%d\t",usb[boucle_show]);
    }
}
/*
Observation : Ce code imprime dix valeurs par pseudo hasard de 0 à 9 par la boucle create est ensuite afficher par la fonction show toutes deux appelées
dans la fonction main.
*/