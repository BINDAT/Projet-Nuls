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
    for (x=0; x <7; x++)
    {
        y = 0;
        while(fruits[x][y] && putchar(fruits[x][y++]))
        {
            ;
        }
        putchar('\n');
    }
    return(0);
}