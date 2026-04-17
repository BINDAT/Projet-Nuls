#include <stdio.h>

int main()
{
    int scoremax1, scoremax2,scoremax3;

    printf("Votre meilleur score: ");
    scanf("%d",&scoremax1);
    printf("Second meilleur score: ");
    scanf("%d",&scoremax2);
    printf("Troisième meilleur score: ");
    scanf("%d",&scoremax3);

    puts("");
    printf("#1 %d\n",scoremax1);
    printf("#2 %d\n",scoremax2);
    printf("#3 %d\n",scoremax3);

    return(0);
}