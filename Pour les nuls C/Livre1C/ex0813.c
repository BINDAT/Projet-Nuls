#include <stdio.h>
int main(){
    int premier,second;
    printf("Indiquez la valeur de premier : ");
    scanf("%d",&premier);//prend la saisit du clavier et la mets en mémoire dans la var
    printf("Indiquez la valeur de second : ");
    scanf("%d",&second);//prend la saisit du clavier et la mets en mémoire dans la var
    puts("Evaluation en cours ...");
    if(premier<second){//si le premier est plus que second
    printf("%d est plus petit que %d\n",premier,second);
    }else if (premier>second){//si second est plus petit que premier
    printf("%d est plus grand que %d\n",premier,second);
    }else{//si les deux sont égos
    printf("%d est egale a %d\n",premier,second);
    }
    return(0);
}
/*
Observation : ici nous avons un comparateur entre deux nombres entiers simple entre plus petit et plus grand et egale avec une structure ave if else et 
if else pour incrementer le nombre de condtion. 
*/

