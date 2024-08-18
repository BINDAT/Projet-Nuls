#include <stdio.h>

#define TAILLE 6

int main()
{
char president [TAILLE][10] = {
"Sarkozy",
"Coty",
"Grevy",
"Mitterrand",
"Chirac",
"Pompidou"
    };
    int x;
    
    x = 0;
    puts(president[x]);
    return(0);  
}
