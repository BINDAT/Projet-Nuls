#include <stdio.h>

#define TAILLE 3

int main()
{
char president [TAILLE][8] = {
"Sarkozy",
"Coty",
"Grevy"
    };
    int x;
    
    x = 0;
    puts(president[x]);
    return(0);  
}
