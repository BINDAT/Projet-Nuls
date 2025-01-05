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

    x=0;
    y=0;
    
    while(x< 7 &&fruits[x][y])
    {
        putchar(fruits[x][y]);
        y++;
        if(fruits[x][y] == '\0')
        {
            x++;
            y=0;
            if(x < 7)
            {
                putchar(' ');
                putchar('\n');
            }
        } 
    }
    putchar('\n');
    return(0);
}
