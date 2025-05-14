#include <stdio.h>//Librairie.

int main()//fonction principale
{
    int x;//var
    x= 0;//val initiale de la var
    while (x<=10)//Boucle est limitation
    {
        printf("Ne marchez pas dans ma pelouse !\n");
        x++;     //incrémentation
    }
    return(0);
}
/*
Observation : Ici le code affiche 10 fois l'instruction du message en printf. Et la boucle s'incremente en interne grâce à x++;*/