#include <stdio.h>
#include <ctype.h>
char bloc_de_texte;

int index, blanc, lettre,ponctuation;

int main()
{   
    printf("%%15s = %15s\n", "hello");
    printf("%%14s = %14s\n", "hello");
    printf("%%13s = %13s\n", "hello");
    printf("%%12s = %12s\n", "hello");
    printf("%%11s = %11s\n", "hello");
    printf("%%10s = %10s\n", "hello");
    printf("%%9s = %9s\n", "hello");
    printf("%%8s = %8s\n", "hello");
    printf("%%7s = %7s\n", "hello");
    printf("%%6s = %6s\n", "hello");
    printf("%%5s = %5s\n", "hello");
    printf("%%4s = %4s\n", "hello");
    index = 0;
    
    while (bloc_de_texte(index))
    {
        if(isblank(bloc_de_texte(index)))
        {
            blanc++;
        }
        if (ispunct(bloc_de_texte(index)))
        {
            ponctuation++;
        }
        if (isalpha(bloc_de_texte(index)))
        {
            lettre++;
        }
        index++;
    }
    printf("%d Lettres de l'alphabet \n%d blancs \n%d signe de ponctuation", lettre,blanc,ponctuation);
    return(0);
}