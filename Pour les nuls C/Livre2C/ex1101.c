#include <stdio.h> // Bibliothèque pour faire fonction puts

int main()
{
    int boucle; // Déclaration d'une variable entière boucle

    for(boucle = 0; boucle <= 10; boucle++) //Utilisation de la variable boucle pour 10 executions
    {
        puts("Ne marchez pa sur ma pelouse!"); //affichage du message fois 10 par la boucle
    }
    return 0; //renvoi 0 dans le terminal pour indiquer que cela sais terminé sans soucis.
}