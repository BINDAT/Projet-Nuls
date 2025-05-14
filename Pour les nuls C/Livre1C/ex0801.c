#include <stdio.h>
int main(){
    int a,b;
    a = 6;
    b= a-2;
    if(a>b){
        printf("%d est plus grand que %d\n",a,b);
    };
    return(0);
}
/*
Observation : Ici nous voyont que il a une comparaison entre la var a et la var b et a-2 (donc b dans cette config seras toujours inferieur a la var a);
dans le bloc de condition if les parametres afficheront demanderas si a est plus 
grand que b si oui elle afficheras le le bloc object quellle contient.
Sinon elle reste inactive a default puisque rien n ai mis pour afficher dans d'autre condition
*/