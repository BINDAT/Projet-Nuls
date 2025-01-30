#include <stdio.h>

int main()/*fonction principale*/
{
    char alphabet[27];/*tableau de caractère de 27 valeurs*/
    int a;/*variable a*/
    char *pa;/*variable pointée pa*/
    
    pa = alphabet;/*pa prend la valeur de alphabet*/
    for (a=0; a<26; a++)/*compte de 0 à 26 en auto incrémentation*/
    {
        *pa=a+'A';/*pa pointée prend la valeur attribuée à a*/
        pa++;/*pa incrémente*/
    };
    pa = alphabet;
    for (a=0; a<26; a++)
    {  
        putchar(*pa);/*affichage ici*/
        pa++;  
    }
    putchar('\n');

    return(0);
}