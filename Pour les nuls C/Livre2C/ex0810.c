#include <stdio.h> // Inclusion de la bibliothèque standard d'entrée/sortie

int main()
{
    int a,b; // Déclaration de deux variables entières a et b

    a = 6; // Affectation de la valeur 6 à la variable a
    b = a - 2; // Affection de la valeur -2 à la variable b

    if (a > b) //Condition de contrôle de supériorité de a contre b
    {
        printf("%d est plus grand que %d\n",a,b);
    }
    else 
    {
        printf("%d n'est pas plus grand que %d\n",a,b);
    }
    return(0);
}