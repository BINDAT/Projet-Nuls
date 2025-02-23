#include <stdio.h>
//En cours de travaux 
/*fonction prototype.*/
void graph(int cmptr, int valeur); //definition du void et des var en parametres du void

int main() //instruction primaire
{
    int valeur, cmptr; // var locales à main

    valeur = 2; //valeur de la var cible
    

    while(valeur <= 64)
    {
       graph(valeur, cmptr); //prend en compte deux var dans les parametres 
        printf("La valeur est %d\n", valeur);
        valeur = valeur * 2; //reprise de la var cible avec auto assignation a l'opperation

    }
    return(0);
}
/* Fonction de definition pour graph*/
void graph(int cmptr, int valeur) //instruction du void
{
    int x; //var locale a l'instruction du void
        for (x=0; x<cmptr; x=x+1)
        putchar('*');
    putchar('\n');
}
/*
Observation : ce code compte en multipliant par *2 jusqu'a 64 par la var val qui est entree dans les parametres de la boucle qui multiplie elle meme la val par la
 *2 puis un fonction protype compte en void graph compte avec la val x et pas chiffre mais en '*' jusqu'a 64 s'arretant quand la boucle avec valeur atteint 64.
Les void graph se contacte entre elles.
*/
/*
Oberservation de solution :
Solution possible valeur = 64 ou 64 ou valeur <= 64
Ses solutions bloque la val graph pour se bloquer a hauteur de la valeur dite que cela sois d'une var ou d'une val
resultat d'affichage different de la methode definie
*/
