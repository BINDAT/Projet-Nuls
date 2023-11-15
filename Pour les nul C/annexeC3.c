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
    printf("%c\n%d\n%.1f\n%f\n",c,i,f,d); //dépassement de mémoire compenser ici par un arrondi
    return(0);
}
