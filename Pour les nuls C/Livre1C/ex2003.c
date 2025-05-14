#include <stdio.h>
#include <stdlib.h>/*Bibliothèque*/

int main(){/*Fonction principale*/
    int nombre1, nombre2, nombre3;/*création des variable*/
    nombre1 =100;
    nombre2 =200;
    nombre3 =300;/*attribution des valeurs*/
    int *nombre; /*variable pointée*/
   
    nombre= (int *)malloc(sizeof(int)*3);/*allocation de mémoire pour 3 int*/
    if (nombre == NULL){/*instruction en cas de problème*/
        printf("L'allocation mémoire a échouée");
        exit(1);/*sortie d'instruction*/
    }
    
    nombre[0] = nombre1;
    nombre[1] = nombre2;
    nombre[2] = nombre3;/*var pointée devient un tableau sélecteur qui prend la valeur d'un var*/
    
    printf("Valeur :#1 %d,#2 %d,#3 %d\n",nombre[0],nombre[1],nombre[2]);/*Affichage*/
    
    free(nombre);/*Libération de la mémoire*/

    return(0);/*retour de fonction*/
}
/*
Observation : Ici le code affiche les valeurs des variables stockées dans une variable variable
pointée qui prend un côté tableau sélecteur.
*/