#include <stdio.h> //biblio
/*fonction*/
int main(){
    printf("La valeur est bien %d\n", VALEUR);  //%d est l'emplacement du nombre et l'affiche dans un message
    printf("et %d est bien la valeur.\n", VALEUR);
    printf("Ce n'est pas %d, \n", VALEUR+1);
    printf("ni %d non plus. \n", VALEUR-1);
    printf("Non, la valeur reste %d \n", VALEUR);
    return(0);
}//Le code est en manque d'une constante ce qui produit les erreurs