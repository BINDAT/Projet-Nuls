#include <stdio.h> // pour printf et getchar

char getch(void) // fonction qui lit un caractère au clavier et le retourne
{
    char ch; // variable locale pour stocker le caractère lu

    ch = getchar(); // on lit un caractère au clavier et on le stocke dans la variable ch
    while(getchar()!='\n') // on vide le buffer d'entrée pour éviter les problèmes avec les caractères restants
        ; // on ne fait rien, on attend juste que l'utilisateur appuie sur Entrée
    return(ch); // on retourne le caractère lu
}

int main()
{
    char primo, secundo; // primo et secundo sont des variables de type char

    printf("Initiale de votre prénom : ");
    primo = getch(); // on lit un caractère et on le stocke dans la variable primo
    printf("Initiale de votre nom de famille : ");
    secundo = getch(); // on lit un caractère et on le stocke dans la variable secundo
    printf("Vos initiales sont '%c et '%c\n",primo,secundo); // on affiche les initiales en utilisant le format %c pour les caractères
    return(0);
}