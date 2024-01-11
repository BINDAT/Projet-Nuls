#include <stdio.h>

int main()
{
    int x;
    for(x=0; x<10; x=x+1)
    {
    puts("Ne vous l'ais-je pas dit ?");
    }
    return(0);
}
/*
Obersavtion : 
la boucle for repete ici l'excution de l'instruction a l'interieur 
(x=0 commmence a partir de 0 x<10 se termine a 10 puis x=x+1 prend x puis sa valeur actuelle et ajoute 1).
*/