#include <stdio.h>

int main()
{
    char primo, secundo;

    printf("Initiale de votre prénom : ");
    primo = getchar();
    printf("Initiale du nom de famille : ");
    secundo = getchar();
    printf("Vos initiales son '%c' et '%c' \n", primo,secundo);
}