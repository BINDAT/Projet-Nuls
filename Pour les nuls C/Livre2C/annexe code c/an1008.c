#include <stdio.h> // pour printf et putchar

void graph(int cmptr, int valeur); // prototype de la fonction graph

int main() // fonction principale
{
    int valeur, cmptr; // déclaration de la variable valeur

    valeur = 2; // initialisation de la variable valeur à 2
   
    while (valeur <= 64) // boucle tant que valeur est inférieure ou égale à 64
    {
        graph(valeur,cmptr); // appel de la fonction graph avec la valeur actuelle de valeur et cmptr
        printf("La valeur est %d\n", valeur); // affichage de la valeur actuelle de la variable valeur
        valeur = valeur * 2; // multiplication de la variable valeur par 2 pour la prochaine itération
    }
    return(0); // fin de la fonction principale, retourne 0 pour indiquer que le programme s'est terminé avec succès
}

void graph(int cmptr, int valeur) // définition de la fonction graph qui prend un entier cmptr et une variable valeur en argument
{
    int x; // déclaration de la variable x
    for (x = 0; x<cmptr; x=x+1) // boucle for qui s'exécute tant que x est inférieur à cmptr, avec une incrémentation de 1 à chaque itération
        putchar('*'); // affichage d'un caractère '*' à chaque itération de la boucle for
    putchar('\n'); // affichage d'un caractère de nouvelle ligne après la boucle for pour passer à la ligne suivante
}