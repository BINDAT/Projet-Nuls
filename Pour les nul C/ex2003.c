#include <stdio.h>
#include <stdlib.h>

int main(){
    int nombre1, nombre2, nombre3;
    nombre1 =100;
    nombre2 =200;
    nombre3 =300;
    int *nombre; 
   
    nombre= (int *)malloc(sizeof(int)*3);
    if (nombre == NULL){
        printf("L'allocation mémoire a échouée");
        exit(1);
    } 
    
    nombre[0] = nombre1;
    nombre[1] = nombre2;
    nombre[2] = nombre3;
    
    printf("Valeur :#1 %d,#2 %d,#3 %d\n",nombre[0],nombre[1],nombre[2]);
    
    free(nombre);

    return(0);
}