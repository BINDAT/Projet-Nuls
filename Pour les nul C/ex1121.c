#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int aleatoire,boucle,saisie;
    printf("Devinez la valeur aléatoire entre 0 et 9 : ");
    srand((unsigned)time(NULL));
    scanf("%d",&aleatoire);
    for(boucle=0; boucle <9; boucle++);
    {     
            aleatoire=rand() %10;
            printf("%d\t",aleatoire);
        
        putchar('\n');
    }
    if(saisie == aleatoire){
        printf("Bravo la valeur aléatoire est bien %d", aleatoire);
    }
    else{
        printf("dommage la valeur aléatoire était %d",aleatoire);
    }
    return(0);
}