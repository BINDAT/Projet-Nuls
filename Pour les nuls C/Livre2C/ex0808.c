#include <stdio.h> // Inclusion de la bibliothèque standard d'entrée/sortie

int main()
{
    int a; // Déclaration d'une variable entière nommée 'a'
    
    a = 5; // Affectation de la valeur 5 à la variable 'a'

    if (a == 3) // Correction de l'erreur : utilisation de l'opérateur de comparaison '==' au lieu de l'opérateur d'affectation '='. Cette condition vérifie si la valeur de 'a' est égale à 3, ce qui est faux dans ce cas, donc le bloc de code suivant ne sera pas exécuté.
    {
        printf("%d égale %d\n", a, -3); // Cette ligne ne sera pas exécutée car la condition est fausse. Si elle était exécutée, elle afficherait la valeur de 'a' et -3, mais cela n'est pas pertinent dans ce contexte.
    }
    return(0); // Retourne 0 pour indiquer que le programme s'est terminé avec succès
}