#include <stdio.h> // pour les fonctions d'entrée/sortie

int main()
{
    int premier, second; // déclaration de deux variables de type entier

    printf("Indiquez la valeur de premier : ");
    scanf("%d", &premier); // lecture de la valeur de 'premier' à partir de l'entrée standard et stockage dans la variable 'premier'
    printf("Indiquez la valeur de second : ");
    scanf("%d", &second); // lecture de la valeur de 'second' à partir de l'entrée standard et stockage dans la variable 'second'

    puts("Evaluation en cours...");
    if (premier < second) // condition pour vérifier si 'premier' est plus petit que 'second'
    {
        printf("%d est plus petit que %d\n", premier, second);
    }
    else if (premier > second) // condition pour vérifier si 'premier' est plus grand que 'second'
    {
        printf("%d est plus grand que %d\n", premier, second);
    }
    else
    {
        printf("%d est égal à %d\n", premier, second); // condition pour vérifier si 'premier' est égal à 'second'
    }
    return(0);
}