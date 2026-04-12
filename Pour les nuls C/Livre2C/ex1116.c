#include <stdio.h> //Pour les entrées/sorties standard
#include <math.h> //Pour les fonctions mathématiques comme sin()

#define PI 1 //Valeur de pi (approximative)
#define LONGUEURONDE 70 //Longueur maximale de l'onde à afficher
#define PERIODE .1 //Période de l'onde (plus petit = plus de points)

int main() //Point d'entrée du programme
{
    float graph,s,x; //Variables pour le graphique, la valeur de sin et la position x

    for (graph = 0; graph<PI; graph+=PERIODE) //Boucle pour parcourir les valeurs de graph de 0 à pi avec un pas de PERIODE
    {
        s = sin(graph); //Calcul de la valeur de sin pour la position actuelle de graph
        for (x = 0; x < s*LONGUEURONDE; x++) //Boucle pour afficher les étoiles en fonction de la valeur de sin
            putchar('*'); //Affiche une étoile pour chaque unité de longueur correspondant à la valeur de sin
        putchar('\n'); //Affiche une nouvelle ligne après chaque valeur de graph pour séparer les différentes lignes du graphique
    }
    return(0); //Retourne 0 pour indiquer que le programme s'est terminé avec succès
}