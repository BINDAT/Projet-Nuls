#include <stdio.h>

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
    int x,y;

    for(x=0; x<7; x++)
        {
            for (y =0; putchar((fruits[x][y])); y++);   
            putchar('\n');
        }
    return(0);
}