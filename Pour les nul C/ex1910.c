#include <stdio.h>

int main()/*fonction principale*/
{
    char alphabet = 'A';/*variable de caractère de valeur égale A*/
    int a;/*variable a*/
    char *pa;/*variable pointée pa*/
    
    pa = &alphabet;/*pa prend en mémoire la valeur de la variable alphabet*/
    
    for (a=0; a<26; a++)/*boucle qui vas jusqu'à 27 tours*/
      
        putchar((*pa)++);/*putchar qui affiche le contenu de pa en incrémentent*/
    putchar('\n');

    return(0);
}