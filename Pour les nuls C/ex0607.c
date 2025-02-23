#include <stdio.h>
int main(){
    unsigned int ono; //retirer le unsigned
    ono = -10;
    printf("La valeur de ono est %u. \n", ono); //passer de %u a %i
    return(0);
}