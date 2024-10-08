#include <stdio.h>

int main (){
    
    int a, b;
    printf("Premier et second entiers :\n");
    scanf("%d %d",&a,&b); //possibilité de scan plusieurs valeurs !N'est pas forcément adaptée à cela!.
    float c = a/b; //possibilité de déclaration variable est de prise de valeur ici risque de sur-levage.
    return printf("%d/%d = %.2f\n",a,b,c); //Renvois est impression ici. !point inhabituel!
}

/*
Observation : Ce code est fait pour une édition courte sans tenir compte des problème que cela
peut éventuellement engendrer.
*/