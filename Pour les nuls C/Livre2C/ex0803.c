#include <stdio.h> //ajout de la bibliothèque standard d'entrée/sortie

int main()
{
    int a,b; //déclaration de deux variables de type entier (int) nommées a et b

    a = 6; //assignation de la valeur 6 à la variable a
    b = a + 2; //assignation de la valeur de a plus 2 à la variable b. Cela signifie que b prendra la valeur 8, car a est égal à 6.

    if (a > b) //condition qui vérifie si la valeur de a est supérieure à celle de b. Si cette condition est vraie, le bloc de code à l'intérieur des accolades sera exécuté.
    
        printf("%d est plus grand que %d\n", a, b); //affichage d'un message indiquant que a est plus grand que b. Le format %d est utilisé pour insérer les valeurs des variables a et b dans la chaîne de caractères affichée.
    
    return(0); //indique que le programme s'est terminé avec succès. La valeur 0 est généralement utilisée pour signaler une exécution réussie.
}