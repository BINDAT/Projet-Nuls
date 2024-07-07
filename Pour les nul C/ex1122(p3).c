#include <stdio.h>

int main()
{
    int calcultrice,a,b,c,d,e;
    a = 20;
    b = -5;
    calcultrice = a + b;
    //printf("%d\n",calcultrice);
    c = b*2;
    calcultrice = calcultrice + c;
    //printf("%d\n",calcultrice);
    d = +42;
    calcultrice = calcultrice + d;
    //printf("%d\n",calcultrice);
    e = d/6;
    calcultrice = calcultrice + e;
    printf("%d\n",calcultrice);
    return(0);
}