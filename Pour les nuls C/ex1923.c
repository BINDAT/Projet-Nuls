#include <stdio.h>

void remiser(float *a);/*Fonction void remiser avec en paramètres en variable float pointée a*/

int main()/*Fonction principale*/
{
    float prixbase = 42.99;/*varible prixbase avec en valeur 42,99*/

    printf("L'article coute $%.2f\n",prixbase);
    remiser(&prixbase);/*Appel de la fonction remiser avec en paramètres prixbase en mémoire*/
    printf("Apres remise, cela donne $%.2f\n",prixbase);
    return(0);
}

void remiser(float *a)/*Fonction remiser*/
{
    *a = *a * 0.90;/*a pointée est égale à a pointée fois 0,90*/
}