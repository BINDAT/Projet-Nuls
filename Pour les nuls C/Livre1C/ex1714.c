#include <stdio.h>

char *binbin(int n); //Création de la variable binbin et avec * pour prendre en entier avec en paramètre un entier du nom n

int main() //Fonction principale.
{
    int b,x; //création des variables entières de b et x

    b = 0x11; //Attribution de la valeur en hexadécimale pour la variable b

    for (x=0; x<8; x++) //Boucle d'affichage de ligne. 
    {
        printf("%s 0x%04x %4d\n",binbin(b),b,b);
        b<<=1;
    }
    return(0);
}

char *binbin(int n) //Réglage de binbin et de paramètre int n. 
{
    static char bin[17]; //Création de la valeur statique de bin au max de 17 caractères. 
    int x; //Création de la variable x.

    for (x = 0; x < 16; x++)//Boucle pour changer le nombre limite de nombre afficher en une ligne.
    {
        bin[x] = n & 0x8000 ? '1' : '0'; //Code binaire avec hexadécimale
        n<<=1;
    }
    bin[x] ='\0';//Échappement de ligne.
    return(bin);//Fin de la fonction bin.
}