#include <stdio.h>

int main()/*fonction principale*/
{
    char *sample = "D'ou me viendra le secours?\n";/*Variable char pointée  avec chaîne de caractère en valeur*/

    while (putchar(*sample++))/*affiche tout de la var sample*/
    {
        ;/*instruction vide pour que la boucle while fonctionne*/
    }
    return(0);
}
/*
Observation : ce code affiche un résultat correct pour peut d'écriture
*/