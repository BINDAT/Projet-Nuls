#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *ficorig, *ficopie; /*Pour prendre les valeur pour le fichier*/
    int c;

    ficorig = fopen("ex2308.c", "r");/*Ce prend en lecture lui même*/
    ficopie = fopen("ex2308.bak", "w");/*Pour ce faire une copie en écriture ici*/
    if ( !ficorig || !ficopie ) /*Si cela n'est pas possible*/
    {
        puts("Erreur fichier !");/*Message d'erreur ici*/
        exit(1);
    }
    while ( (c=fgetc(ficorig)) !=EOF )/*Si réussite prend tout le ficorig pour commencer la lecture*/
        fputc(c, ficopie); /*Est finir en copie d'écriture ici avec ficopie et c*/
    puts("Copie de fichier faite");/*Message de réussite*/
    return(0);
}