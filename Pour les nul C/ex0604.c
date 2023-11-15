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