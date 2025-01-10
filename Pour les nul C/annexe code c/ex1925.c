#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 10

void create(int *données_create);
void show();

int main()
{
    int tableau_main;
    puts("Données stockées : ");
    while (tableau_main <= TAILLE)
    {
        create(tableau_main);
        printf("%d\n",tableau_main);
    }
    
    
    return(0);
}

void create(int *données_create)
{
    int tableau_create[] = {0,1,2,3,4,5,6,7,8,9};
    int curseur_create;
    for(curseur_create = 0; curseur_create < *données_create; curseur_create++)
    {
        putchar((*tableau_create[données_create]));
        putchar('\n');
    }
}