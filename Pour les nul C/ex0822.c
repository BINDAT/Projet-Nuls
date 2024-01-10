#include <stdio.h>
int main()
{
    int a, b,leplusgrand;
    printf("Indiquez une valeur A : ");
    scanf("%d",&a);
    printf("Indiquez une valeur B : ");
    scanf("%d",&b);
    
    if (a>b)
    {
        leplusgrand = a; 
    }
    else{
        leplusgrand = b;
    }
    printf("Voici la valeur %d finale",leplusgrand);
    return(0);
    
}
/*
Observation : Ici la var leplusgrand sert de point de comparaison sur la var a et b puis construit le bloc de condtion.
ont peut noter que le bloc de condition par if-else.
et la var le plus grand dans la condition sert et elle est ensuite reprise dans le printf.
*/