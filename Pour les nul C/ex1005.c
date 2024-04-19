#include <stdio.h>
/*Fonction du prototype*/
void vegas(void);

int main()
{
    int a;

    a = 365;
    printf("Dans la fonction main(), a=%d\n", a);
    vegas(); //saut de void concerner ici vegas
    printf("De retour dans main(), a=%d\n",a);
    return(0);
}

void vegas(void)
{
    int a;  //Variable locale

    a = -10;
    printf("Dans la fonction vegas(), a=%d\n", a);
}

/*
Oberservation : Ce code affiche la valeur des variables locales de chaques fonctions, commencent par int main le premier printf s'affichera de la puis a partir de vegas ils iras
puisser les instruction puis une fois effectuer reprendras au second printf de main.
Stock memoire grace a la fonction du protype.
Reste a etudier mais cela ressemble a une affection d'etiquette comme dans les logiciel de la serie des rpg maker  
*/