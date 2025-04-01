#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <dirent.h>

int main()
{
    char dosscour[255];      
        
        if(getcwd(dosscour, sizeof(dosscour)) == NULL)            
            {
                printf("erreur de récupération");
                return(1);
            }
            
        if(mkdir("ultra_tempo", 0755)==0)
            {
                puts("Nouveau dossier fait.");
                printf("Dossier courant : %s\n", dosscour);
                chdir("ultra_tempo");
                getcwd(dosscour, 255);
                printf("Dossier courant à l'endroit : %s\n", dosscour);
            }
            else
                {
                    puts("Dossier déjà présent");
                    printf("Dossier courant : %s\n", dosscour);
                    chdir("ultra_tempo");
                    getcwd(dosscour, 255);
                    printf("Dossier courant à l'endroit : %s\n", dosscour);
                }    
    return(0);
}