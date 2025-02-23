#include <stdio.h>

typedef int tentier; //définition d'un nouveau type 'tentier' qui est équivalent à 'int'

tentier main()//la fonction principale retourne un 'tentier' (équivalent de 'int')
{
    tentier a = 2;//déclaration de la variable 'a' de type 'tentier' et affectation de la valeur 2

    printf("Tout le monde sait que ");

    printf("%d + %d = %d\n", a, a, a+a);
    return(0);
}