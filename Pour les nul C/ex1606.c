#include <stdio.h>

void procedure(void); //création de la fonction procedure
int a = 0;
int main()
{
    puts("Premier appel");
    procedure();//premier appel des instruction de la fonction procedure
    puts("Second appel");
    procedure();//second appel des instruction de la fonction procedure
    return(0);
}

void procedure(void)//bloc d'affectation des instruction de la fonction procedure
{
    
    printf("La valeur de la variable a est %d\n",a);
    printf("Indiquez une autre valeur : ");
    scanf("%d",&a);
}