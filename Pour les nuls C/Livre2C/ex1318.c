#include <stdio.h> // pour printf et getchar

int main()
{
    char primo, secundo; // primo et secundo sont des variables de type char

    printf("Initiale de votre prénom : ");
    primo = getchar(); // on lit un caractère et on le stocke dans la variable primo
    printf("Initiale de votre nom de famille : ");
    second = getchar(); // on lit un caractère et on le stocke dans la variable secundo
    printf("Vos initiales sont '%c et '%c\n",primo,secundo); // on affiche les initiales en utilisant le format %c pour les caractères
    return(0);
}