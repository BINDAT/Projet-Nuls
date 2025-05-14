#include <stdio.h>
#define SECRET 17
int main(){
    int devinessai;
    printf("Tentez de deviner le chiffre  secret : ");
    scanf("%d",&devinessai);
    if(devinessai == SECRET)
    {
        puts("Bravo !");
        return(0);
    }
    if(devinessai != SECRET)
    {
        puts("Non ce n'est pas cela !");
        return(1);
    }

}
/*
Observation : ce code et programmer pour contenir une variable en dehors du bloc int main SECRET et une var interne int main devinessai la var interne et en jointure sur deux conditions if une si le
resultat est excate et une autre si clea n'est pas le cas ses deux conditions sont en appuie sur la valeur SECRET sur le scanf qui mets en memoire la valeur saisi au clavier  
*/
