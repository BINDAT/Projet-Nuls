#include <stdio.h>

int main()
{
    int calcultrice,a,b,c,d,e;
    a = 20;
    b = -5;
    c = b*2;
    d = +42;
    e = d/6;
    calcultrice = a,b,c,d,e;
    printf("%d\n",calcultrice);
    return(0);
}
/*
Solution : Cette solution prend toutes les val des var entre elles avant de rentrer dans la var calcultrice.
*/