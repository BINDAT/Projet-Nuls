#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Validez par Entrée pour vider l'affichage !");
    getchar();
    //system("cls"); // Efface l'affichage de l'écran sous Windows
    system("clear"); // Efface l'affichage de l'écran sous Linux et MacOS
    puts("That's better");
    return(0);
}