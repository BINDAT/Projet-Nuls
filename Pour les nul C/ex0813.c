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
    }else if (premier>second){
    printf("%d est plus grand que %d\n",premier,second);
    }else{
    printf("%d est egale a %d\n",premier,second);
    }
    return(0);
}
/*
Observation : ici nous avons un comparateur entre deux nombres entiers simple entre plus petit et plus grand et egale avec une structure ave if else et 
if else pour incrementer le nombre de condtion. 
*/

