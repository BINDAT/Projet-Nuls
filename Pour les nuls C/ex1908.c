#include <stdio.h>

int main()/*fonction principale*/
{
    char alphabet[27];/*tableau limite de valeur 27*/
    int a;/*var a*/
    char *pa;/*var pointée pa*/
    
    pa = alphabet;/*pa prend la valeur alphabet*/
    for (a=0; a<26; a++)/*boucle de 0 à 26 en auto incrémentation*/
    {
        *pa++=a+'A';/*pa incrémente la boucle a qui commence à A*/
    }
    pa = alphabet;/*point de restauration*/
    for (a=0; a<26; a++)/*boucle de 0 à 26 en auto incrémentation*/
    {  
        putchar(*pa);/*affichage*/
        pa++;/*incrémentation de pa*/
    }
    putchar('\n');

    return(0);
}