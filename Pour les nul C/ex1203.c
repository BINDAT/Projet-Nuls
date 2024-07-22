#include <stdio.h>

int score[4];

int main(){
    printf("Écrivez vos scores: ");
    for (int boucle = 0; boucle < 4; boucle++) {
        scanf("%d", &score[boucle]);
    }

    puts("Voici vos scores");

    for (int boucle = 0; boucle < 4; boucle++) {
        printf("#%d\n", score[boucle]);
    }

    return 0;
}
