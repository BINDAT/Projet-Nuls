#include <stdio.h>
int main(){
    int premier,second;
    printf("Indiquez la valeur de premier : ");
    scanf("%d",&premier);
    printf("Indiquez la valeur de second : ");
    scanf("%d",&second);
    puts("Evaluation en cours ...");
    if(premier<second){
        printf("%d est plus petit que %d\n",premier,second);
    };
    if(premier>second){
        printf("%d est plus grand que %d\n",premier,second);
    };
    if(premier==second){
        printf("les deux sont egaux %d et %d",premier,second);
    }
    return(0);
}
/*
Observation : ici nous avons un comparateur entre deux nombres entiers simple entre plus petit et plus grand avec possibiliee etre egaux. 
*/