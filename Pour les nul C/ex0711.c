#include <stdio.h>
int main()
{
    char prompt [] = "Programme pour exploser le Monde \n Frappez Entree pour exploser :";
    printf("%s", prompt);
    getchar();
    return(0);
}
/*
Obersavation : Ici il a un tableau au char prompt qui es appeler dans le printf avec sa valeur a afficher
*/