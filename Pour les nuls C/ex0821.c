#include <stdio.h>
int main()
{
    int a, b, leplusgrand;
    printf("Indiquez une valeur A : ");
    scanf("%d",&a);
    printf("Indiquez une valeur B : ");
    scanf("%d",&b);

    leplusgrand = (a>b) ? a : b;
    printf("La valeur %d est plus grande. \n", leplusgrand);
    return(0);    
}
/*
Observation : Ici la var leplusgrand sert de point de comparaison sur la var a et b puis construit le bloc de condtion.
ont peut noter que le bloc de condition contient avec facteur ternaire qui sert de vrai faux : (a>b) ? a : b;. et affiche le nombre 
le plus grand par le facteur ternaire.
*/