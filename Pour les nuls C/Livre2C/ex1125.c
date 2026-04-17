#include <stdio.h> // Inclusion de la bibliothèque standard d'entrée/sortie

int main()
{
    int opération0,opération1,opération2, valeur0,valeur1,valeur2; // Déclaration de variables entières pour stocker les résultats des opérations et les valeurs intermédiaires

    opération0 = 2 + 42; // Calcul de l'opération 2 + 42 et stockage du résultat dans la variable opération0
    opération1 = 20 - 5; // Calcul de l'opération 20 - 5 et stockage du résultat dans la variable opération1
    valeur0 = opération0; // Affectation de la valeur de opération0 à la variable valeur0
    valeur1 = opération1; // Affectation de la valeur de opération1 à la variable valeur1
    valeur2 = 6; // Affectation de la valeur 6 à la variable valeur2
    opération2 = valeur0*valeur1/valeur2; // Calcul de l'opération (valeur0 * valeur1) / valeur2 et stockage du résultat dans la variable opération2
    
    printf("%d\n", opération2); // Affichage du résultat de l'opération2 suivi d'un saut de ligne
    return(0);
}