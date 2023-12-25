#include <stdio.h>
int main()
{
    char answer;
    printf("Veuillez Répondre par oui ou non avec Y et N :");
    scanf("%c",&answer);
    if(answer == 'Y' || answer == 'y' || answer == 'O' || answer == 'o')
    {
        printf("Vous avez accpeter et repondue :%c\n",answer);
    }
    else if(answer == 'N' || answer == 'n')
    {
        printf("Vous refusez et avez repondue :%c\n",answer);
    }
    else 
    {
        printf("La réponse saisie n'est pas connue : %c\n",answer);
    }
    return(0);
}