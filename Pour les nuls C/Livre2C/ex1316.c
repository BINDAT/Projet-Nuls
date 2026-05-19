#include <stdio.h>

#define taille 4

int main()
{
    char *President[][2]= 
    {
        {"George", "Washington"}, 
        {"John", "Adams"}, 
        {"Thomas", "Jefferson"},
        {"James", "Monroe"}
    };
    for (int boucle = 0; boucle < taille; boucle++)
    {
        printf("%-10s %s\n",President[boucle][0],President[boucle][1]);
    }
    return(0);
}