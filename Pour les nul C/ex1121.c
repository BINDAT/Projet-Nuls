#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int aleatoire,saisie;
    printf("Devinez la valeur aléatoire entre 0 et 9 : ");
    srand((unsigned)time(NULL)); //var var en srand assignée sur une val aléatoire sur avec time(NULL)
    scanf("%d",&saisie);
         
            aleatoire=rand() %10; //limite de 0 à 9.
            printf("%d\t",aleatoire);
        
        putchar('\n');
    
    if(saisie == aleatoire){
        printf("Bravo la valeur aléatoire est bien %d", aleatoire);
    }
    else{
        printf("dommage la valeur aléatoire était %d",aleatoire);
    }
    return(0);
}
/*
Observation : Ce code génère un chiffre entre 0 et 9 que la personne peut essayer de deviner.
*/