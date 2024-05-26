#include <stdio.h>

int main()
{
    int a,b;

    b=16;
    printf("Avant a ne change pas encore et b = %d\n",b);
    a=++b; //a prend l'ancienne val et ajoute a  lui meme avec b aussi a cause du ++b
    printf("Apres a = %d et b = %d\n",a,b);
    return(0);
}