#include <stdio.h>
#include <ctype.h>

int main()
{
    char reponse;

    printf("Voulez-vous faire exploser la lune ? ");
    scanf("%c", &reponse);
    reponse = toupper (reponse);
    if(reponse == 'O' && 'o')
        puts("BOUM !");
    else if(reponse == 'N' && 'n')
        puts("La lune ne craint rien.");
    else
        puts("Cela n'est pas une réponse attendue.");
    return(0);
}