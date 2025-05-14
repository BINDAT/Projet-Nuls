#include <stdio.h>

int main()/*fonction principale*/
{
    char sample[] = "D'ou me viendra le secours?\n";/*Variable tableau sample*/
    int index = 0;/*variable index et valeur 0*/

    while(sample[index])/*la boucle prend sample et sample prend en paramètre index*/
    {
        putchar(sample[index++]);/*putchar prend sample qui lui même prend index qui incrémente*/
    }
    return(0);
}
/*
Observation : ce code permet l'affichage correct de la var sample.
*/