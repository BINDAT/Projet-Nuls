#include <stdio.h>

int main()
{
    float jump_advance_while;

    jump_advance_while = -5;

    while (jump_advance_while <= 5)
    {
        printf("Saut de 0,5 actuel %f\n", jump_advance_while);
        jump_advance_while = jump_advance_while + 0.5;
    }
    
}
/*
Observation : dans se programme une boucle negative -5 se vois avancer d'une valeur positive a +5 par saut de 0.5
*/