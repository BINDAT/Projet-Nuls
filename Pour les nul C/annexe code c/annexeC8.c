#include <stdio.h>

int main()
{
    int x;
    for(x=0; x<5; x=x+1)
    {
    printf("Ne vous l'ais-je pas dit %d ?\n",x);
    }
    return(0);
}
/*
Obersavtion : 
la boucle for repete ici l'excution de l'instruction a l'interieur 
(x=0 commmence a partir de 0 x<10 se termine a 5 puis x=x+1 prend x puis sa valeur actuelle et ajoute 1)
Mais affiche en comptant a partir de 0 les lignes affichers.
*/