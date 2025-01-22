#include <stdio.h>

int main()/*Fonction principale*/
{
    char *sample = "D'ou me viendra le secours?\n";/*variable char pointée avec une chaîne de caractères*/
    char *save;/*variable de caractères pointée*/
    
    save = sample; /*la var save prend la val de la var sample*/
    

    while (putchar(*sample++))/*la boucle affiche toute la chaîne de caractères de sample*/
    {
        ;/*instruction qui permet au code de fonctionner*/
    }
    
    sample = save;/*sample prend la val de save point de restauration*/
    puts(sample);/*sample est affichée après le point de restauration*/

    return(0);
}