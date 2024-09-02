#include <stdio.h>
#include <ctype.h>

int main()
{
    char reponse;

    printf("Voulez-vous faire exploser la lune ? ");
    scanf("%c", &reponse);
    if(reponse == 'O' || reponse == 'o')
        puts("BOUM !");
    else if(reponse == 'N' || reponse == 'n')
        puts("La lune ne craint rien.");
    else
        puts("Cela n'est pas une réponse attendue.");
    return(0);
}
/*
Observation : Ce code affiche les des messages à l'entrée de O ou N ou o et n mais affichera un message en else ppur l'erreur de saisie.
*/