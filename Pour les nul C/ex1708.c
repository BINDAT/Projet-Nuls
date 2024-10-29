#include <stdio.h>

char *binbin(int n);//création de binbin et de sont paramètre.


int main()
{
    int a,x,r;//création des var a x y.

    a = 73;//attribution de la val sur la var a.
    x = 170;//attribution de la val sur la var x.

    printf("  %s %3d\n",binbin(a),a);
    printf("^ %s %3d\n",binbin(x),x);
    r = a ^ x;//attribution de r avec la val de a avec ^ x
    printf("= %s %3d\n",binbin(r),r);
    return(0);
}

char *binbin(int n)//affectation des instructions dans binbin
{
    static char bin[9];
    int x;//création de x

    for(x=0; x<8; x++)//boucle limite de caractère
    {
        bin[x] = n & 0x80 ? '1' : '0';//attribution binaire pour bin et sa val x.
        n <<= 1;
    }
    bin[x] = '\0';//échappement.
    return(bin);//fin du code.
}