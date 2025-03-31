#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>

int main()
{
    char dosscour[255];

    getcwd(dosscour, 255);
    printf("Dossier courant : %s\n", dosscour);
    mkdir("ultra_tempo", 755);  //L11 pour Unix
    puts("Nouveau dossier fait.");
    chdir("ultra_tempo");
    getcwd(dosscour, 255);
    printf("Dossier courant : %s\n", dosscour);
    return(0);
}