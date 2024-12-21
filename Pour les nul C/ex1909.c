#include <stdio.h>

int main()
{
    char alphabet = 'A';
    int a;
    char *pa;
    
    pa = &alphabet;
    
    for (a=0; a<26; a++)
      
        putchar((*pa)++);  
    putchar('\n');

    return(0);
}