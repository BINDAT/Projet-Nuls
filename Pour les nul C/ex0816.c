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
/*
Observation : se code compare les entrees de claviers avec les conditions avec l'operateurs OU || se qui permet de savoir ou vas la reponse et
du scanf qui inscrit cela dans la var answer de l'attribue char et d'afficher une reponse adequate.
*/