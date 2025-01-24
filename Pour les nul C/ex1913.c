#include <stdio.h>

int main()/*fonction principale*/
{
    char sample[] = "D'ou me viendra le secours?\n";/*Variable de chaîne de caractère en tableau*/
    int index = 0;/*variable mise à 0*/

    while(sample[index])/*Boucle while avec paramètre sample est sample avec curseur de tableau index*/
    {
        putchar(sample[index]);/*putchar affiche sample à l'avancer de du curseur index en tableau*/
        index++;/*Incrémentation de index pour faire avancer le tableau en boucle*/
    }
    return(0);
}
/*
Observation : affiche la valeur correctement.
*/