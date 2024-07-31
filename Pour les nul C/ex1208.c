#include <stdio.h>

int main()
{
    char phrase [] = "Texte insignifiant";
    int index;

    index = 0;
    while(phrase[index]!='\0')
    {
        putchar(phrase[index]);
        index++;
    }
    putchar('\n');
    return(0);
}
/*
Observation : affiche le texte en dehors du tableaux à étudier.
*/