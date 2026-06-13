#include <stdio.h> // pour printf et getchar

char getch(void)
{
    char ch;

    ch = getchar();
    while(getchar()!='\n')
        ;
    return(ch);
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