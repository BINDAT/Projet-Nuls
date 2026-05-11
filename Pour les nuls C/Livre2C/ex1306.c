#include <stdio.h> //Pour printf et fgets
#include <string.h> //Pour strlen pour la longueur de la chaîne
#include <ctype.h> //Pour isupper, islower, toupper et tolower

int main()
{
    char texte[100], lettre[100]; //Déclaration de deux tableaux de caractères pour stocker le texte saisi et le texte modifié
    int pointeur; //Déclaration d'un entier pour parcourir les tableaux de caractères

    printf("Saisissez du texte : ");
    fgets(texte,sizeof(texte),stdin); //Lecture de la saisie de l'utilisateur et stockage dans le tableau de caractères "texte"
    
    for(pointeur = 0; texte[pointeur] !='\0'; pointeur++) //Boucle pour parcourir chaque caractère du texte saisi jusqu'à la fin de la chaîne (indiquée par '\0')
    {
        if(isupper(texte[pointeur])) //Si le caractère est une lettre majuscule
        {
            lettre[pointeur] = tolower(texte[pointeur]); //Convertit la lettre majuscule en minuscule et la stocke dans le tableau de caractères "lettre" à la même position
        }
        else if(islower(texte[pointeur])) //Si le caractère est une lettre minuscule
        {
            lettre[pointeur] = toupper(texte[pointeur]); //Convertit la lettre minuscule en majuscule et la stocke dans le tableau de caractères "lettre" à la même position
        }
        else
        {
            lettre[pointeur] = texte[pointeur]; //Si le caractère n'est ni une lettre majuscule ni une lettre minuscule, il est copié tel quel dans le tableau de caractères "lettre" à la même position
        }
        
    }
    lettre[pointeur] ='\0'; //Ajout du caractère de fin de chaîne '\0' à la fin du tableau de caractères "lettre" pour indiquer la fin de la chaîne

    printf("Voici votre saisit : %s\n", lettre);

    return(0);
}