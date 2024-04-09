#include <stdio.h>

/* Function prototype */
void prompt();

int main() {
    int loop;
    char input[32];

    loop = 0;
    while (loop < 5) {
        prompt();
        fgets(input, 31, stdin);
        loop = loop + 1;
    }
    return 0;
}

/* Function definition for prompt() */
void prompt() {
    printf("C:\\DOS>");
}
/*
Obersavtion : Ce programme permet de saisir 5 fois de suites des commandes. (A etudier)
Contient une boucle while avec une var loop implementer dans ses parametre et une restriction sur 5.
La var loop a pour valeur 0 et dans le while elle augmente de 1 jusqu'à temps quelle atteind le nombre de la restrction de while.
La var input permet une saisie maximale de 32 charactere actuellement.
Est le fgets de la boucle permet une interaction (A etudier) avec input sur 31 charactere en prenant une saisie avec stdin.
Les void reste a etudier.
*/