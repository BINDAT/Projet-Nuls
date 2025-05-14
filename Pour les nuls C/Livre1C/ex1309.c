#include <stdio.h>
#include <string.h>

int main()
{
    char motpasse[] = "taco"; //notre mot de passe
    char tabsaisie[15]; //notre entrée clavier du mot de passe
    
    printf("Le mot de passe ? ");
    scanf("%s",tabsaisie); //Prend la saisie et met en mémoire dans la var tabsaisie.
    
    if (strcasecmp(tabsaisie,motpasse)==0)//compare les deux var des val de tabsaisie est motdepasse avec la var match et la fonction strcasecmp qui lui renvoie 0 quand les deux val des var correspondes sans distinctions des majuscules et minuscules.
    
        puts("Mot de passe correct");
    else
        puts("Mauvais mot de passe. Alertez la DGSE");

    return(0);    
}