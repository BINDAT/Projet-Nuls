#include <stdio.h>
#include <stdlib.h>

int main()
{

int r,a; // r sert pour le nombre aléatoire. a pour la boucle interne et b pour la restrictions.

for (a=0; a<20; a++)//La boucle gère les itérations avec la var b
{
    {
        r=rand() %21;//var qui prend des nombre aléatoire avec rand le %21 détermine la limite à 20.
        printf("%d\t",r);
    }
    putchar('\n');
}
return(0);
}
/*
Observation : ce code affiche des nombres entre 0 et 20.
b ici a été retirer mais le code fonctionne pour donner le même résultat.
*/