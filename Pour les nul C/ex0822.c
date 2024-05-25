#include <stdio.h>
int main()
{
    int a, b,leplusgrand; //point de creation des var.
    printf("Indiquez une valeur A : ");
    scanf("%d",&a);//prend l'entrer et met en memoire sur a.
    printf("Indiquez une valeur B : ");
    scanf("%d",&b);//prend l'entrer et met en memoire sur b.
    
    if (a>b) //boucle a condition entre var a et b pour prendre leurs val en memoire.
    {
        leplusgrand = a; //var a en prise avec var leplusgrand.
    }
    else{
        leplusgrand = b; //car b en prise avec var leplusgrand.
    }
    printf("Voici la valeur %d finale",leplusgrand);
    return(0);
    
}
/*
Observation : Ici la var leplusgrand sert de point de comparaison sur la var a et b puis construit le bloc de condtion.
ont peut noter que le bloc de condition par if-else.
et la var le plus grand dans la condition sert et elle est ensuite reprise dans le printf.
*/