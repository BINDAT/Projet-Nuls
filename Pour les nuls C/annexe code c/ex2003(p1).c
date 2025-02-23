#include <stdio.h>
#include <stdlib.h>

int main() {
    int *nombre;
    
    
    nombre = (int *)malloc(sizeof(int) * 3);
    
    if (nombre == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    nombre[0] = 100;
    nombre[1] = 200;
    nombre[2] = 300;

    printf("Values: %d, %d, %d\n", nombre[0], nombre[1], nombre[2]);

    free(nombre);

    return 0;
}