#include <stdio.h>
#include <string.h>

int main ()
{
    struct date 
    {
        int sjour;
        int smois;
        int sannee;
    }; 
    
    
    struct humain 
    { 
        struct id 
        {
            char hprenom[45];
            char hnomfam[45];
        }hnom;       
        struct date hdatenaiss;
    };
    struct humain president;
    strcpy(president.hnom.hprenom,"George");
    strcpy(president.hnom.hnomfam,"Washington");
    president.hdatenaiss.sjour = 22;
    president.hdatenaiss.smois = 2;
    president.hdatenaiss.sannee = 1732;
   
    printf("Naissance de %s %sle %d/%d/%d\n",president.hnom.hprenom,president.hnom.hnomfam,president.hdatenaiss.sjour,president.hdatenaiss.smois,president.hdatenaiss.sannee);
    
    return(0);
}