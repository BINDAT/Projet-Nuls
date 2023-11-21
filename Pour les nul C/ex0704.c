#include <stdio.h>
int main()
{
    int c;
    printf("J'attend trois caracteres a b c: ");
    c = getchar();
    c = getchar();
    c = getchar();
    printf("J'ai obtenu les caractere '%c'. '%c'. '%c'.",c,c,c);
    return(0);
}
