#include <stdio.h>

#define TAILLE 3

int main()
{
char president [TAILLE][8] = {
"Sarkozy",
"Coty",
"Grevy"
    };
    int x,index;
    
    index = 0;
    for(x=0; x<TAILLE; x++)
    {
    while(president[x][index]!= '\0')
        {
            putchar(president[x][index]);
            index++;
        }
        putchar('\n');
    }
    return(0);
    
}
