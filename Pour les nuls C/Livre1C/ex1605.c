#include <stdio.h>

void proc(void);//création de proc

int main()//fonction principale
{
    puts("Premier appel");
    procedure();//premier appel
    puts("Second appel");
    procedure();//second appel
    return(0);
}

void procedure(void)//affectation d'instructions
{
    int a = 0;//création de var a avec val 0
    printf("La valeur de la variable a est %d\n",a);
    printf("Indiquez une autre valeur : ");
    scanf("%d", &a);
}