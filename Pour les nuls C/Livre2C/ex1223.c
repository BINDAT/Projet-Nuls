include <stdio.h> // pour printf() et puts()

#define TAILLE 5 // définit une constante TAILLE avec la valeur 5, utilisée pour la taille du tableau

void afficherTablo(int tablo[]); // déclaration de la fonction afficherTablo qui prend un tableau d'entiers en argument et ne retourne rien (void)

int main() // point d'entrée du programme
{
    int n[] = { 1, 2 ,3, 5, 7 }; // initialise un tableau d'entiers n avec les valeurs 1, 2, 3, 5 et 7

    puts("Votre tableau :"); // affiche une phrase pour introduire le tableau
    afficherTablo(n); // appelle la fonction afficherTablo en lui passant le tableau n pour afficher son contenu
    return(0); // indique que le programme s'est terminé avec succès
}

void afficherTablo(int tablo[]) // définition de la fonction afficherTablo qui prend un tableau d'entiers en argument
{
    int x; // variable de boucle pour parcourir le tableau

    for(x=0; x<TAILLE; x++) // boucle pour parcourir les éléments du tableau de 0 à TAILLE-1
        printf("%d\t", tablo[x]); // affiche la valeur de chaque élément du tableau suivie d'une tabulation pour l'alignement
    putchar('\n'); // après avoir affiché tous les éléments du tableau, affiche un saut de ligne pour passer à la ligne suivante
}