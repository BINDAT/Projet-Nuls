#include <stdio.h>
#include <stdlib.h>

/* Prototypes */

void remplir_struct(void);
void montrer_struct(void);

/* Constantes */

/* Variable */

struct sTruc {
    char nom[32];
    int age;
    };

typedef struct sTruc humain;