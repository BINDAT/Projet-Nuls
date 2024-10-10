#include <stdio.h>

void proc(void);

int main()
{
    puts("Premier appel");
    procedure();
    puts("Second appel");
    procedure();
    return(0);
}

void procedure(void)
{
    int a = 0;
    printf("La valeur de la variable a est %d\n",a);
    printf("Indiquez une autre valeur : ");
    scanf("%d", &a);
}