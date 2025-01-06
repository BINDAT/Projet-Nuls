#include <stdio.h>
#include <string.h>

int main()
{
    char *fruits[] ={
        "melon",
        "banane",
        "poire",
        "pomme",
        "noix",
        "raisin",
        "myrtille"
    };
    char *temp;
    int a,b,x;

    for (a=0; a<6; a++)
        for (b=a+1; b<7; b++)
            if (strcmp(fruits[a],fruits[b])>0)
            {
                temp = *(fruits+a);
                *(fruits+a) = *(fruits+b);
                *(fruits+b) = temp;
            }
        for (x=0; x<7; x++)
            puts(fruits[x]);
    
    return(0);
}