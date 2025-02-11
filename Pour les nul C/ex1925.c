#include <stdio.h>
#include <stdlib.h>
#include <time.h>/*Bibliothèques*/

#define TAILLE 10 /*Constante*/

void create(int *usb);
void show(int *usb);/*Fonction void avec variable en paramètres*/

int main()/*Fonction principale*/
{
    int usb[TAILLE];/*variable tableau avec curseur la constante*/
    /*puts("Données stockées : "); Test*/
        create(usb);/*appel de la fonction create avec en paramètre usb*/
    puts("Données choisies : ");
        show(usb);/*appel de la fonction show avec en paramètre usb*/
    
    return(0);
}

void create(int *usb)
{   
    
    for(int boucle_create = 0; boucle_create < TAILLE; boucle_create++)
    {
        usb[boucle_create] = rand()%10;
        /*printf("%d\t",usb[boucle]); Test*/
    }/*cette fonction sert à générer des valeur aléatoire en 0 et 9 dix fois.*/
}

void show(int *usb)
{
    for (int boucle_show = 0; boucle_show < TAILLE; boucle_show++)
    {
       printf("%d\t",usb[boucle_show]);
    }/*sert à montrer les nombres générer de manière aléatoire*/
}
/*
Observation : Ce code imprime dix valeurs par pseudo hasard de 0 à 9 par la boucle create est ensuite afficher par la fonction show toutes deux appelées
dans la fonction main.
*/