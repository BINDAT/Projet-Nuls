#include <stdio.h> // pour entrée/sortie

int main()
{
    int x; // déclaration de la variable x
    
    for (x=0; x<10; x=x+1, printf("%d",x)) // initialisation de x à 0, condition de continuation tant que x est inférieur à 10, incrémentation de x de 1 à chaque itération et affichage de x à chaque incrémentation
        ; // boucle for avec une instruction vide, le printf est dans la partie d'incrémentation
    return(0); // fin du programme
}