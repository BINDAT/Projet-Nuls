#include <stdio.h>

int main()
{
    char choixMenu;

    puts("Nos formules du jour :");
    puts("A - Petit déjeuner, midi et soir");
    puts("B - Demi-pension matin et soir");
    puts("C - Repas du soir seul");
    printf("Votre choix : ");
    scanf("%c", &choixMenu);
    
    printf("Vous avez choisi ");
    switch (choixMenu)
    {
    case 'A':
        printf("Repas du midi,");
    case 'B':
        printf("Petit déjeuner,");
    case 'C':
        printf("Repas du soir ");
    default:
        printf("comme formule de restauration.\n");
    }
    return(0);
}