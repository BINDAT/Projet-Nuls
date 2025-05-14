#include <stdio.h>

int main()/*fonction principale*/
{
    char alphabet[27];/*variable alphabet avec une limite de 27 valeur en tableau*/
    int a;/*variable a*/
    char *pa;/*variable pointée*/
    
    pa = alphabet;/*pa prend la valeur de alphabet*/
    for (a=0; a<26; a++)/*boucle for qui vas de 0 à 26*/
    {
        *pa++=a+'A';/*prend pa en pointée et incrément en prenant une valeur de la variable a de la boucle*/
    }
    pa = alphabet;/*reprend pa avec la valeur de alphabet*/
    for (a=0; a<26; a++)/*boucle for qui vas de 0 à 26*/
    {  
        putchar(*pa++);/*Affiche la variable pointée de pa en incrémentation*/
    }
    putchar('\n');

    return(0);
}