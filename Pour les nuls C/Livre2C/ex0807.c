#include <stdio.h> // Inclusion de la bibliothèque standard d'entrée/sortie

int main()
{
    int a; // Déclaration d'une variable entière nommée 'a'
    
    a = 5; // Affectation de la valeur 5 à la variable 'a'

    if (a =-3 ) // Cette ligne contient une erreur : l'opérateur d'affectation '=' est utilisé au lieu de l'opérateur de comparaison '=='. Cela assignera la valeur -3 à 'a' et évaluera l'expression à -3, ce qui est considéré comme vrai en C. Par conséquent, le bloc de code suivant sera exécuté, ce qui n'est pas le comportement attendu.
    {
        printf("%d égale %d\n", a, -3); // Affiche la valeur de 'a' et -3, mais cette condition est incorrecte car elle utilise l'opérateur d'affectation au lieu de l'opérateur de comparaison
    }
    return(0); // Retourne 0 pour indiquer que le programme s'est terminé avec succès
}