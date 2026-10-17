#include <stdio.h>
#include <stdlib.h>

void sub(void); // Prototype de la fonction sub avec un paramètre vide

int main()
{
    puts("Ce programme stoppe abruptement."); // Affiche un message
    sub(); // Appel de la fonction sub
    puts("Est-ce l'intention initiale ?"); 
    return(0);
} // Fin de la fonction main

void sub(void)
{
    puts("C'est normal."); // Affiche un message
}