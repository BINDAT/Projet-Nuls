#include <stdio.h>

int main()
{
    pointdechute: //ignorer au debut puis utiliser a goto
    puts("Ceci est une boucle brutale.");
    goto pointdechute; //retourne a pointdechute
}
/*
Obsevertion : Ce code creer une boucle infinie. 
Ce code est peut maintenable est n'offre peut de possibilitee. 
Il est prefarable d'utiliser d'autre moyen pour creer une boucle. 
*/