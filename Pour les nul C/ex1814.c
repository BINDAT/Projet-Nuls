#include <stdio.h>

int main()
{
    int nombre;
    float décimaux;
    int *lecteur_nombre;
    float *lecteur_décimaux;

    nombre = 960;
    décimaux = 6.9;

    printf("Les variables contiennes %d et %.1f\n",nombre,décimaux);
    lecteur_nombre = &nombre;
    lecteur_décimaux = &décimaux;
    printf("Les lecteur ont lus %d et %.1f\n",*lecteur_nombre,*lecteur_décimaux);
    return(0);
}