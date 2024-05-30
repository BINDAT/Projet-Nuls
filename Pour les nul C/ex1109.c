#include <stdio.h>

int main()
{
    float alpha;

    alpha = 501;//etat de la première val de la var
    printf("alpha = %.1f\n",alpha);
    alpha = alpha+99; //incrémentation avec auto affectation.
    printf("alpha = %.1f\n",alpha);
    alpha = alpha-250; //décrémentation avec auto affectation
    printf("alpha = %.1f\n",alpha);
    alpha = alpha/82; //division avec auto affectation.
    printf("alpha = %.1f\n",alpha);
    alpha = alpha*4.3;//multiplication avec un float en auto affectation.
    printf("alpha = %.1f\n",alpha);
    return(0);
}
/*
Observation : affiche plusieurs messages avec des opérations différentes en float manipuler en auto affectation avec la variable elle même. le message sert de balise de suivie des opérations des modifications de valeur.
*/