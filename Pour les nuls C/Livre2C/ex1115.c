#include <stdio.h> //Pour les entrées/sorties standard
#include <math.h> //Pour les fonctions mathématiques, notamment sin()

#define PI 3.14159 //Définition de la constante PI
#define LONGUEURONDE 70 //Définition de la longueur d'onde pour l'affichage du graphique
#define PERIODE .1 //Définition de la période pour l'incrémentation de graph

int main()
{
    float graph,s,x; //Déclaration des variables : graph pour l'angle, s pour la valeur du sinus, x pour le compteur de caractères

    for (graph = 0; graph<PI; graph+=PERIODE) //Boucle pour faire varier graph de 0 à PI avec un pas de PERIODE
    {
        s = sin(graph); //Calcul de la valeur du sinus de graph et stockage dans s
        for (x = 0; x < s*LONGUEURONDE; x++) //Boucle pour afficher des '*' en fonction de la valeur de s multipliée par LONGUEURONDE
            putchar('*'); //Affichage d'un '*' pour chaque itération de la boucle
        putchar('\n'); //Affichage d'un saut de ligne après chaque série de '*' pour passer à la ligne suivante du graphique
    }
    return(0); //Retourne 0 pour indiquer que le programme s'est terminé avec succès
}