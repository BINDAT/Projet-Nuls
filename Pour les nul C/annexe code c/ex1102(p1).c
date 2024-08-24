#include <stdio.h>

int main()
{
    int x; //var x
    x= 0; // val x
    while (x<=10)//boucle en parametre x en restriction <=10
    {
        printf("Ne marchez pas dans ma pelouse !\n");
        ++x;     //incrémentation de la var x
    }
    return(0);
}