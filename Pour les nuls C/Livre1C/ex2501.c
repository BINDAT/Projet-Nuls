#include <stdio.h>
#include <stdlib.h>

int main()
{
    char loop;/*var chaîne de caractère*/

    puts("Affichage de l'alphabet :");
    for (loop = 'A'; loop<='Z'; loop++); /*Erreur volontaire ici si retirer affichage correct*/
        putchar(loop);/*affiche la boucle*/
    return 0;
}