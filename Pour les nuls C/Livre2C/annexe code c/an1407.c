#include <stdio.h> // pour printf et scanf

#define NBJOUEURS 4

int main()
{
    struct scores // déclaration de la structure
    {
        char nomj[32]; // nom du joueur
        int score; // score du joueur
    };
    struct scores joueurs[NBJOUEURS]; // déclaration d'un tableau de structures
    int x,interne,externe; // variable de boucle
    struct scores temp; // variable temporaire pour le tri
    for (x= 0; x<NBJOUEURS; x++)
    {
        printf("Indiquez le nom du joueur %d : ",x+1);
        scanf("%s", joueurs[x].nomj); // saisie du nom du joueur
        printf("Indique son score : ");
        scanf("%d", &joueurs[x].score); // saisie du score du joueur
    }
    
    for (externe=0; externe < NBJOUEURS-1; externe++)
    {
        for (interne=externe + 1; interne < NBJOUEURS; interne++)
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
    for (x= 0; x<NBJOUEURS; x++)
    {
        printf("%d\t%s\t%5d\n", x+1, joueurs[x].nomj, joueurs[x].score);
    }
    return(0);
}