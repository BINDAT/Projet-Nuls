#include <stdio.h>

char *strinverser(char *input);/*créer une fonction char à pointeur strinverser avec 
en paramètre sa fonction char pointeur input*/

int main() /*Fonction principale*/
{
    char machaine[64]; /*Tableau de caractères de taille 64*/

    printf("Saisissez du texte : ");
    fgets(machaine,62,stdin); //prise d'entrée de saisit 
    puts(strinverser(machaine)); /*Affiche la saisit*/

    return(0);
}

char *strinverser(char *entrante)/*Fonction char avec pointeur strinverser 
avec sa fonction char pointeur entrante*/
{
    static char sortante[64];/*Fonction static char sortante de taille 64 (static est un tampon 
    de mémoire ici*/
    char *i,*o; /*fonction pointeur i et o*/

    i = entrante; o = sortante; /*Attribution de i à entrante et o à sortante 
    pour le transit des données*/

    while(*i++ != '\n')/*boucle d'incrémentation*/
        ;
    i--;/*décrémentation*/

    while (i >= entrante) /*comparaison de i et entrante*/
        *o++ = *i--; /*o pointeur incrémente et i pointeur décrémente*/
    *o = '\0';

    return(sortante);/*Ressort les données ici mais à l'envers*/
}
/*
Observation : Ce code prend la saisit et la restitue à l'envers grâce à la fonction *strinverser et la var i qui cherche est pointe sur les derniers saut
de ligne et o qui remonte le remonte car entre temps i est stock dans o. 
*/