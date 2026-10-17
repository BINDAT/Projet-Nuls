#include <stdio.h>
#include <stdlib.h>

void sub(void); // Prototype de la fonction sub avec un paramètre vide

int main()
{
    puts("Ce programme stoppe abruptement."); // Affiche un message
    sub(); // Appel de la fonction sub
    puts("Est-ce l'intention initiale ?"); // Cette ligne ne sera jamais exécutée parce que la fonction sub appelle exit(0), ce qui termine le programme immédiatement.
    return(0);
} // Fin de la fonction main

void sub(void)
{
    puts("C'est normal."); // Affiche un message
    exit(0); // Appel de la fonction exit pour terminer le programme immédiatement avec un code de sortie 0, indiquant une terminaison réussie.
}