#include <stdio.h>
#include <stdlib.h>

void sub (void);//créer la fonction sub

int main ()//fonction principale
{
    puts("Ce programme stoppe abruptement.");
    sub();//appel de la fonction sub
    puts("Est-ce l'intention initiale ?");
    return(0);
}
void sub(void)//attribution des instructions de sub
{
    puts("C'est normal.");
    exit(0);//sortie de la fonction sub sans l'instruction return
}