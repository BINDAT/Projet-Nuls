#include <stdio.h>
int main()
{
    int c; //var c
    printf("Je vais recevoir un caractere: "); //affiche un message.
    c = getc(stdin); //prend l'entree du clavier et le stock dans la var c.
    printf("J'ai obtenu le caractere '%c'.",c); //affiche le message avec le caractere tapper au clavier. 
    return(0);
}
