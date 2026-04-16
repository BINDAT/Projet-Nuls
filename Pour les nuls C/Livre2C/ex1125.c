#include <stdio.h> // Inclusion de la bibliothèque standard d'entrée/sortie

int main()
{
    int opération0,opération1,opération2, valeur0,valeur1,valeur2;

    opération0 = 2 + 42;
    opération1 = 20 - 5;
    valeur0 = opération0;
    valeur1 = opération1;
    valeur2 = 6;
    opération2 = valeur0*valeur1/valeur2;
    
    printf("%d\n", opération2);
    return(0);
}