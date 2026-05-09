#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char texte[100], lettre[100];
    int pointeur;

    printf("Saisissez du texte : ");
    fgets(texte,sizeof(texte),stdin);
    
    for(pointeur = 0; texte[pointeur] !='\0'; pointeur++)
    {
        if(isupper(texte[pointeur]))
        {
            lettre[pointeur] = tolower(texte[pointeur]);
        }
        else if(islower(texte[pointeur]))
        {
            lettre[pointeur] = toupper(texte[pointeur]);
        }
        else
        {
            lettre[pointeur] = texte[pointeur];
        }
        
    }
    lettre[pointeur] ='\0';

    printf("Voici votre saisit : %s\n", lettre);

    return(0);
}