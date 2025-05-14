#include <stdio.h>

void remiser(float *a);/*fonction void remiser avec sa variable float pointée a en paramètre.*/

int main()/*Fonction principale*/
{
    float prixbase = 42.99;/*variable prixbase en float avec valeur 42.99*/
    float p;/*variable float p*/
    p = prixbase;/*prise de la valeur prixbase dans la var p*/
    printf("L'article coute $%.2f\n",prixbase);
    remiser (&p);/*appel de la fonction remiser avec en paramètre p en mémoire*/
    printf("Apres remise, cela donne $%.2f\n",p);
    return(0);
}

void remiser(float *a)/*Fonction remiser*/
{
    *a = *a * 0.90;/* a pointée est égale à a pointée fois 0,90*/
}