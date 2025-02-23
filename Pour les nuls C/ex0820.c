#include <stdio.h>

int main ()
{
    char choixMenu;
    
    puts("Nos formules du jour :");
    puts("A - Petit dejeuner, midi et soir");
    puts("B - Demi-pension matin et soir");
    puts("C - Repas du soir seul");
    printf("Votre choix : ");
    scanf(" %c",&choixMenu);
    printf("Vous avez choisi ");
    switch (choixMenu)
    {
    case 'A': 
    case 'a':
        printf("Repas du midi, ");
        
    case 'B': 
    case 'b':
        printf("Petit dejeuner, ");
        
    
    case 'C': 
    case 'c':
        printf("Repas du soir ");
        
    
    default:
        printf("comme formule de restauration. \n");
    }
    return (0);
}

/*
Obersavation : ce code renvoit la formule choisie en fonction de l'entrer clavier grace a la var choixMenu puis le scanf et la memoire de &choixMenu 
puis envoit la saisie au bloc switch grace au parametre du bloc ou ici il a deux case pour un meme affichage.
*/