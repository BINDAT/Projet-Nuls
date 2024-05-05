#include <stdio.h>

/*fonction prototype.*/
void graph(int comptr);

int main()
{
    int valeur; //création de la var locale de main

    valeur = 2; // désignation de la valeur de la var locale

    while(valeur <= 64)
    {
        graph(valeur);//fonction graph avec en paramètres la var locale valeur au main
        printf("La valeur est %d\n", valeur);
        valeur = valeur * 2; //prise de la var avec auto résignation de la var pour l'opération.
    }
    return(0);
}
/* Fonction de definition pour graph*/
void graph(int cmptr)
{
    int x; //var local a la fonction graph

    for (x=0; x<cmptr; x=x+1)
        putchar('*');
    putchar('\n');
}
/*
Observation : ce code compte en multipliant pa *2 jusqu'a 64 par la var val qui est entree dans les parametres de la boucle qui multiplie elle meme la val par la
 *2 puis un fonction protype compte en void graph compte avec la val x et pas chiffre mais en '*' jusqu'a 64 s'arretant quand la boucle avec valeur atteint 64.
*/