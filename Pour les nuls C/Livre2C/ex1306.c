#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char texte[100], minuscule[100], majuscule[100];
    int pointeur;
    printf("Saisissez du texte : ");
    fgets(texte,sizeof(texte),stdin);
    
    for(pointeur = 0; texte[pointeur] !='\0'; pointeur++)
    {
        if(isupper(texte[pointeur])!='\0')
        {
            minuscule[pointeur] = tolower(texte[pointeur]);
        }
        else if (islower(texte[pointeur]))
        {
            majuscule[pointeur] = toupper(texte[pointeur]);
        }
    }
    
    printf("Voici votre saisit : %c \n", texte[pointeur]);

    return(0);
}