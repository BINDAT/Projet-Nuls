/*Librairies*/
#include <stdio.h>
#include <ctype.h>

char saisie[448];//variable pour la saisie
int curseur = 0;//variable pour naviguer dans la variable saisie 


/*Fonction principale*/
int main(){ 
    
    printf("Saisissez du texte : ");
    fgets(saisie,447,stdin);//enregistre l'entrée du clavier en valeur pou la variable saisie 
    
    while (saisie[curseur])//boucle pour naviguer dans la saisie avec la variable curseur
    {    
        if(islower(saisie[curseur])){//exécution normale quand tout est en minuscule
            putchar(toupper(saisie[curseur]));//transforme tout en majuscule
            }
        else if(isupper(saisie[curseur])){//quand un ou plusieurs caractères sont en majuscule
            printf("Quelque caractère en majuscule trouvé : ");
            putchar(toupper(saisie[curseur]));
            }
        else if(isspace(saisie[curseur])) {//pour ignorer les espaces
                putchar(saisie[curseur]);
                }
        else//quand au moins un caractères n'est pas une lettre
            {
            printf("\nProblème ils y autre chose que des lettres.");
            break;
            }
        
        curseur++;//incrémente la boucle
    }
    return(0);
}