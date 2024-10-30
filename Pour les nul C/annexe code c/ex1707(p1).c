/*Librairies*/
#include <stdio.h>
#include <ctype.h>

char saisie[448];
int curseur = 0;


/*Fonction principale*/
int main(){ 
    
    printf("Saisissez du texte : ");
    fgets(saisie,447,stdin);
    
    while (saisie[curseur])
    {    
        if(islower(saisie[curseur])){
            putchar(toupper(saisie[curseur]));
            
            }
        else if(isupper(saisie[curseur])){
            printf("Quelque caractère en majuscule trouvé : ");
            putchar(toupper(saisie[curseur]));
            }
        else if(isspace(saisie[curseur])) {
                putchar(saisie[curseur]);
                }
        else
            {
            printf("\nProblème ils y autre chose que des lettres.");
            break;
            }
        
        curseur++;
    }
    return(0);
}