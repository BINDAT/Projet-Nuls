#include <stdio.h>
int main(){
    //definition des usages
    char c;
    int i;
    float f;
    double d;
    //application des usages
    c = 'a';
    i = 1;
    f = 19.8;//dépassement de mémoire
    d = 20000.009;
    //affichage test
    printf("%c\n",c);
    printf("%d\n",i);
    printf("%.1f\n",f); //dépassement de mémoire compenser ici par un arrondi
    printf("%f\n",d);
    return(0);
}
/*
Ici dans la definition des usages des var ils est defini les var pour les utilisers et leur attribues de reglage exemple INT, FLOAT.
A l'application des usage une valeur leur est attribuer en fonctions des attribues de reglage INT, FLOAT.
Est Par la suite dans la partie affichage test les var pour afficher le result pour chacune
cette solution est pluris lignes pour l'affichage.
*/