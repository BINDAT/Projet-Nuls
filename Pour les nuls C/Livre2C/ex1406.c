#include <stdio.h> // pour printf et scanf

int main()
{
    struct scores // déclaration de la structure
    {
        char nomj[32]; // nom du joueur
        int score; // score du joueur
    };
    struct scores joueurs[4]; // déclaration d'un tableau de structures
    int x; // variable de boucle

    for (x= 0; x<4; x++)
    {
        printf("Indiquez le joueur %d : ",x+1);
        scanf("%s", joueurs[x].nomj); // saisie du nom du joueur
        printf("Indique son score : ");
        scanf("%d", &joueurs[x].score); // saisie du score du joueur
    }
    
    puts("Infos de joueur");
    printf("#\tNom\tScore\n");
    for (x= 0; x<4; x++)
    {
        printf("%d\t%s\t%5d\n", x+1, joueurs[x].nomj, joueurs[x].score);
    }
    return(0);
}