#include <stdio.h>
#include <string.h>

int main()
{
    char motpasse[] = "taco"; //notre mot de passe
    char tabsaisie[15]; //notre entrée clavier du mot de passe
    int match;

    printf("Le mot de passe ? ");
    scanf("%s",tabsaisie); //Prend la saisie et met en mémoire dans la var tabsaisie.
    match=strcasecmp(tabsaisie,motpasse);//compare les deux var des val de tabsaisie est motdepasse avec la var match et la fonction strcmp qui lui renvoie 0 quand les deux val des var correspondes sans distinction des majuscules et minuscules.
    if (match==0)
    
        puts("Mot de passe correct");
    else
        puts("Mauvais mot de passe. Alertez la DGSE");

    return(0);    
}