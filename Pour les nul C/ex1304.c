#include <stdio.h>
#include <ctype.h>

int main()
{
    char reponse;

    printf("Voulez-vous faire exploser la lune ? ");
    scanf("%c", &reponse);
    reponse = toupper (reponse);
    if(reponse == 'O')
        puts("BOUM !");
    else
        puts("La lune ne craint rien.");
    return(0);
}