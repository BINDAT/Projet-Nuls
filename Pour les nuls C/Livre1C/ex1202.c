#include <stdio.h>

int main()
{
    int scoremax1,scoremax2,scoremax3,scoremax4;//crées les vars scoremax
    
    printf("Votre meilleur score: ");
    scanf("%d",&scoremax1);//prend l'entrée de clavier et la mets dans scoremax1
    printf("Second meilleur score: ");
    scanf("%d",&scoremax2);//prend l'entrée de clavier et la mets dans scoremax2
    printf("Troisième meilleur score: ");
    scanf("%d",&scoremax3);//prend l'entrée de clavier et la mets dans scoremax3
    printf("Quatrième meilleur score: ");
    scanf("%d",&scoremax4);//prend l'entrée de clavier et la mets dans scoremax4


    puts("Voici vos meilleurs score");
    printf("#1 %d\n", scoremax1);//affiche la var
    printf("#2 %d\n", scoremax2);//affiche la var
    printf("#3 %d\n", scoremax3);//affiche la var
    printf("#4 %d\n", scoremax4);//affiche la var

}