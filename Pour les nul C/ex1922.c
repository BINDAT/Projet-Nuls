#include <stdio.h>
#include <string.h>

int main()/*Fonction principale*/
{
    char *fruits[] ={/*Variable tableau avec pointeur fruits*/
        "melon",
        "banane",
        "poire",
        "pomme",
        "noix",
        "raisin",
        "myrtille"/*Données du tableau*/
    };
    char *temp;/*Variable pointée temp*/
    int a,b,x; /*variable a b x*/

    for (a=0; a<6; a++)/*boucle qui compte de 0 à 6 et augmente à partir de a*/
        for (b=a+1; b<7; b++)/*boucle qui compte à partir de b avec a +1 en dessous de b7 et b s'auto incrémente*/
            if (strcmp(fruits[a],fruits[b])>0)/*avec strcmp reprise de fruits a et b pour tri*/
            {
                temp = *(fruits+a); /*temp prend les val de fruits a*/
                *(fruits+a) = *(fruits+b);/*fruits a et b sont égalisés*/
                *(fruits+b) = temp;/*temp fait prendre ses vals en stock à fruits b*/
            }
        for (x=0; x<7; x++)/*boucle d'impression*/
            puts(fruits[x]);
    
    return(0);
}