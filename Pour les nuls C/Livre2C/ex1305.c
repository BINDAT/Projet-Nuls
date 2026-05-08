#include <stdio.h>
#include <ctype.h>

int main()
{
    char reponse;
    printf("Voulez-vous faire exploser la lune ?");
    scanf("%c",&reponse);
    reponse = toupper(reponse);
    if (reponse == 'O')
        puts("BOUM!");
    else if (reponse == 'N')
        puts("La lune ne craint rien.");
    else
        puts("Votre réponse n'est ni oui ni non");
    return(0);
}