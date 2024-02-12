#include <stdio.h>

int main()
{
    char alphabet;

    for (alphabet = 'A'; alphabet <= 'Z'; alphabet = alphabet +1)/*ici compte a partir de A puis ajoute +1 jusqu'a la lettre Z et prend le var 
    alphabet pour lui imputer la var*/
    {
        printf("%d", alphabet); //ici affiche un message avec les val multiple de la var en char %c
    }
    putchar('\n');
    return(0);
}
/*
Observation : affiche des chiffres grace %d à la boucle for.
*/
