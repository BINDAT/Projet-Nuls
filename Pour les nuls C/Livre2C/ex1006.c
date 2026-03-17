#include <stdio.h> // pour printf et putchar

void graph(int cmptr); // prototype de la fonction graph

int main() // fonction principale
{
    int valeur; // déclaration de la variable valeur

    valeur = 2; // initialisation de la variable valeur

    while (valeur <= 64) // boucle tant que valeur est inférieure ou égale à 64
    {
        graph(valeur); // appel de la fonction graph avec valeur comme argument
        printf("La valeur est %d\n", valeur); // affichage de la valeur actuelle
        valeur = valeur * 2; // mise à jour de la variable valeur en la multipliant par 2
    }
    return(0);
}

void graph(int cmptr) // définition de la fonction graph qui prend un entier cmptr en argument
{
    int x; // déclaration de la variable x
    for (x = 0; x<cmptr; x=x+1) // boucle for qui s'exécute tant que x est inférieur à cmptr, en incrémentant x de 1 à chaque itération
        putchar('*'); // affichage d'un caractère '*' à chaque itération de la boucle
    putchar('\n'); // affichage d'un caractère de nouvelle ligne après la boucle for pour passer à la ligne suivante
}