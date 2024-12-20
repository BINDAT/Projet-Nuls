#include <stdio.h>

int main()
{
    char alphabet[27];
    int a;
    char *pa;
    
    pa = alphabet;
    for (a=0; a<26; a++)
    {
        *pa++=a+'A';
    }
    pa = alphabet;
    for (a=0; a<26; a++)
    {  
        putchar(*pa);
        pa++;  
    }
    putchar('\n');

    return(0);
}