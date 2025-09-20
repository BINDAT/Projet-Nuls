import java.util.Scanner;

class MotRetrograde {
    public static void main(String[] args) {
        Scanner clavier = new Scanner(System.in); // création d'un objet Scanner pour la saisie au clavier
        char c1, c2, c3, c4; // déclaration de quatre variables de type char pour stocker les caractères du mot saisi

        c1 = clavier.findWithinHorizon(".", 0).charAt(0); // lecture du premier caractère saisi et stockage dans la variable c1
        c2 = clavier.findWithinHorizon(".", 0).charAt(0); // lecture du deuxième caractère saisi et stockage dans la variable c2
        c3 = clavier.findWithinHorizon(".", 0).charAt(0); // lecture du troisième caractère saisi et stockage dans la variable c3
        c4 = clavier.findWithinHorizon(".", 0).charAt(0); // lecture du quatrième caractère saisi et stockage dans la variable c4

        System.out.print(c4); // affichage des caractères dans l'ordre inverse de leur saisie
        System.out.print(c3); // affichage des caractères dans l'ordre inverse de leur saisie
        System.out.print(c2); // affichage des caractères dans l'ordre inverse de leur saisie
        System.out.print(c1); // affichage des caractères dans l'ordre inverse de leur saisie
        
        System.out.println(); // saut de ligne après l'affichage du mot à l'envers

        clavier.close(); // fermeture du scanner pour éviter les fuites de ressources
    }
}