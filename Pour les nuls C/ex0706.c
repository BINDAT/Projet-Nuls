#include <stdio.h>
int main ()
{
    int ch;
    printf("Frappez Entree : ");
    getchar();
    ch = 'H';
    putchar(ch);
    ch = 'i';
    putchar(ch);
    putchar('!');
    putchar('\n');
    return(0);
}
/*
Observation : ce programme affiche Hi! grace au valeurs stocker dans ch et putchar qui permet de modifier ch grace a leurs parametres.
*/