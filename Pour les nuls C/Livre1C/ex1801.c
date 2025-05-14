#include <stdio.h>

int main()
{
    char c = 'c';
    int i = 123;
    float f = 98.6;
    double d = 6.022E23;

    printf("char\t%u\n", sizeof(c));//l'opérateur sizeof prend la var en son sein pour l'affichage d'empreinte de chaque var
    printf("int\t%u\n", sizeof(i));//l'opérateur sizeof prend la var en son sein pour l'affichage d'empreinte de chaque var
    printf("float\t%u\n", sizeof(f));//l'opérateur sizeof prend la var en son sein pour l'affichage d'empreinte de chaque var
    printf("double\t%u\n", sizeof(d));//l'opérateur sizeof prend la var en son sein pour l'affichage d'empreinte de chaque var
    return(0);
}