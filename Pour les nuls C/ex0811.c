#include <stdio.h>
int main()
{
    int a,b;
    a = 6;
    b;
    printf("Veuillez taper votre nombre : ");
    scanf("%d", &b);
    if(a>b){
        printf("%d est plus grand que %d\n",a,b);
        }
    else{
        printf("%d n'est pas plus grand que %d\n",a,b);
    };
    return(0);
}
/*
Observation : Ici nous retrouvont une condition if qui afficheras si a et plus grand que b ou plus petit avec else mais pas de condition if supplementaire le & sert de memoire qui 
seras ensuite mis dans la condition est en resultat de l'affichage.
*/