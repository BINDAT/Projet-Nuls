#include <stdio.h>
#include <ctype.h>

int main()
{
    char reponse;

    printf("Voulez-vous faire exploser la lune ? ");
    scanf("%c", &reponse);

    switch (reponse)
    {
    case 'O': 
    case 'o':
        puts("BOUM !");
        break;
    
    case 'N': 
    case 'n':
        puts("La lune ne craint rien.");
        break;
    default:
        puts("Cela n'est pas une réponse attendue.");
        break;
    }
    
}
/*
Observation : Ce code affiche les des messages à l'entrée de O ou N ou o et n mais affichera un message en else pour l'erreur de saisie. les conditions sont créers en switch case.
*/