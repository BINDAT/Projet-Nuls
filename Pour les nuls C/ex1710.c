#include <stdio.h>

char *binbin(int n);//Création de la variable binbin et avec * pour prendre en entier avec en paramètre un entier du nom n

int main()//Fonction principale.
{
    int decalbin,x; //Création de decalbin et x.
    
    printf("Indiquez une valeur entre 0 et 255: ");
    scanf("%d",&decalbin);//Prend la saisie et la met en val de decalbin.

    for(x=0; x<8; x++)//Boucle d'affichage de ligne.
    {
        printf("%s\n", binbin(decalbin));
        decalbin = decalbin << 1;//Prend la val en mémoire avec décalage de 1 sur côté droit.
    }
    return(0);
}

char *binbin(int n)
{
    static char bin[9];//Création de la valeur statique de bin au max de 9 caractères.
    int x;//Création de la variable x.

    for (x= 0; x < 8; x++)//Boucle pour changer le nombre limite de nombre afficher en une ligne.
    {
        bin[x] = n & 0x80 ? '1' : '0';//Code binaire avec hexadécimale
        n <<= 1;//n sert de décalage sur côté droit
    }
    bin[x] = '\0';//Échappement de ligne.
    return(bin);//Fin de la fonction bin.
}