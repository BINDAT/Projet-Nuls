#include <stdio.h> //biblio
#define Number 9 //ici la constante est definie. 
/*fonction*/
int main(){
    printf("La valeur est bien %d\n", Number);  //%d est l'emplacement est avec la valeur de la constante du nombre et l'affiche dans un message
    printf("et %d est bien la valeur.\n", Number);
    printf("Ce n'est pas %d, \n", Number+1);
    printf("ni %d non plus. \n", Number-1);
    printf("Non, la valeur reste %d \n", Number);
    return(0);
}//ici le code est corrigé sur un exemple de constante se qui permet a celui ci de fonctionner.