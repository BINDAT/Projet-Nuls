#include <stdio.h>
#include <string.h>

int main()
{
    
    struct scores
    {
        char nomj[32];
        int  score;
    };
    struct scores joueurs[4];
    struct scores temp;
    int x,interne,externe;

    for (x=0; x<4; x++)
    {
        printf("Indiquez le joueur %d : ",x+1);
        scanf("%s", joueurs[x].nomj);
        printf("Indique son score : ");
        scanf("%d",&joueurs[x].score);
    }
    
    for (externe=0; externe < 4-1; externe++)
    {
        for (interne=externe + 1; interne < 4; interne++)
        {
            if (joueurs[externe].score < joueurs[interne].score)
            {
                temp = joueurs[externe];
                joueurs[externe] = joueurs[interne];
                joueurs[interne] = temp;
            }
            
        }
        
    }
    

    puts("Infos de joueur");
    printf("#\tNom\tScore\n");
    for (x=0;  x<4; x++)
    {
        printf("%d\t%s\t%5d\n",x+1, joueurs[x].nomj, joueurs[x].score);
    }
    return(0);
}

/*
Observation : Ce code contient deux bloc de structures de définition qui contient des variables vierges. Ils contient un bloc de structure de définition des valeurs des variables. Et un bloc d'instruction d'affichage.
Et aussi un bloc de tri des données pour les mettres en ordres en fonctions du score.
*/