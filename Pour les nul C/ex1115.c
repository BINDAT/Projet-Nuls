#include <stdio.h>
#include <math.h>

#define PI 3.14159
#define LONGUEURONDE 70
#define PERIODE .1

int main()
{
    float graph,s,x;

    for(graph=0; graph<PI; graph+=PERIODE) //boucle qui reprend en paramètre PI et periode dans la var int a main graph
    {
        s=sin(graph); //graph donne une val a la var s
        for(x=0; x< s*LONGUEURONDE; x++) //ici la var LONGUEURONDE et en paramètre avec x et s
            putchar('*');
        putchar('\n');
    }
return(0);
}

/*
Observation : Fait une forme de dessin (Courbe) à partir des valeurs dans les variables et grâce au putchar ('*')
*/