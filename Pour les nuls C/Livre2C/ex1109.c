#include <stdio.h> // inclusion de la bibliothèque standard d'entrée/sortie

int main() // fonction principale du programme
{
    float alpha; // déclaration d'une variable de type float nommée alpha

    alpha = 501; // affectation de la valeur 501 à la variable alpha
    printf("alpha = %.1f\n",alpha); // affichage de la valeur de alpha avec une décimale, suivi d'un saut de ligne
    alpha+=99; // addition de 99 à la valeur actuelle de alpha et affectation du résultat à alpha
    printf("alpha = %.1f\n",alpha); // affichage de la nouvelle valeur de alpha avec une décimale, suivi d'un saut de ligne
    alpha-=250; // soustraction de 250 à la valeur actuelle de alpha et affectation du résultat à alpha
    printf("alpha = %.1f\n",alpha); // affichage de la nouvelle valeur de alpha avec une décimale, suivi d'un saut de ligne
    alpha/=82; // division de la valeur actuelle de alpha par 82 et affectation du résultat à alpha
    printf("alpha = %.1f\n",alpha); // affichage de la nouvelle valeur de alpha avec une décimale, suivi d'un saut de ligne
    alpha*=4.3; // multiplication de la valeur actuelle de alpha par 4.3 et affectation du résultat à alpha
    printf("alpha = %.1f\n",alpha); // affichage de la nouvelle valeur de alpha avec une décimale, suivi d'un saut de ligne
    return(0); // retour de la valeur 0 pour indiquer que le programme s'est terminé avec succès
}