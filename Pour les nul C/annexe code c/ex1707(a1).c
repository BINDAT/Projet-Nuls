#include <stdio.h>
#include <ctype.h>

int main()//fonction principale
{
    char input[448];//création de input en chaîne de caractères limite de 448
    int ch;//création de ch
    int x = 0;// création de x en valeur 0

    printf("Saisissez du texte : ");
    fgets(input,447, stdin);//prend et enregistre dans input avec limite de 447 avec stdin
    
    if (input[x] >='A' && input[x] <= 'Z')//convertie normalement une chaîne de caractères en majuscule en minuscule 
    {
        while (input[x] != '\n' && input[x] !='\0')//répète en boucle pour terminer la conversion de chaque caractères le !='\n' sert pour déterminé autre qu'une lettre et !='\0' sert à déterminer autre qu'un nombre
        {
        ch = tolower(input[x] & 223); //ch reçois ici toutes les valeurs de input transformation par tolower
        putchar(ch);//ici affichage de tout les caractères convertis
        x++;//incrémente la boucle
        }
        putchar('\n');//nouvelle ligne
    }
    else if(input[x] >='a' && input[x] <='z')//Quand ils y a déjà un ou plusieurs caractères en minuscules
        {
        printf("Lettre en minuscule trouver avant modification : ");    
        while (input[x] != '\n' && input[x] !='\0')//répète en boucle pour terminer la conversion de chaque caractères
        {
        ch = tolower(input[x] & 223);//ch reçois ici toutes les valeurs de input transformation par tolower
        putchar(ch);//ici affichage de tout les caractères convertis
        x++;//incrémente la boucle
        }
        putchar('\n');//nouvelle ligne
        }       
    else //autre cas ici
    {
        printf("Impossible d'afficher autre chose que des lettres");
    }
    return(0);
}