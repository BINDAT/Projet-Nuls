#include <stdio.h>
int main(){
    printf("La valeur est bien %d\n", 5);  //%d est l'emplacement du nombre
    printf("et %d est bien la valeur.\n", 5);
    printf("Ce n'est pas %d, \n", 5+1);
    printf("ni %d non plus. \n", 5-1);
    printf("Non, la valeur reste %d \n", 5);
    return(0);
}