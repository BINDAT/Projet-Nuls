#include <stdio.h>
#include <stdlib.h>

int main()
{

int r,a,b; // r sert pour le nombre aléatoire. a pour la boucle interne et b pour la restrictions.
puts("100 chiffres au hasard");
for (a=0; b<20; b++)//La boucle gère les itérations avec la var b
{
    {
        r=rand();//var qui prend des nombre aléatoire avec rand
        printf("%d\t",r);
    }
    putchar('\n');
}
return(0);
}
/*
Observation : Affiche de nombre entre 0 et 9 de manière aléatoire avec tabulations et saut de ligne.
Reste à savoir comment ils est possible d'en avoir 100 ?
*/