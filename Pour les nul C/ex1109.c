#include <stdio.h>

int main()
{
    float alpha;

    alpha = 501;
    printf("alpha = %.1f\n",alpha);
    alpha = alpha+99;
    printf("alpha = %.1f\n",alpha);
    alpha = alpha-250;
    printf("alpha = %.1f\n",alpha);
    alpha = alpha/82;
    printf("alpha = %.1f\n",alpha);
    alpha = alpha*4.3;
    printf("alpha = %.1f\n",alpha);
    return(0);
}
/*
Observation : affiche plusieurs messages avec des opérations différentes en float manipuler en auto affectation avec la variable elle même. le message sert de balise de suivie des opérations des modifications de valeur.
*/