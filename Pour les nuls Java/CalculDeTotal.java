import java.util.Scanner; // Importation de la classe Scanner

class CalculDeTotal {
    public static void main(String args []) {
        Scanner clavier = new Scanner(System.in); // Création d'un objet Scanner pour la saisie
        double dPrixUni, dQuanti, total; // Déclaration des variables
        
        dPrixUni = clavier.nextDouble(); // Saisie du prix unitaire
        dQuanti = clavier.nextInt(); // Saisie de la quantité

        total = dPrixUni * dQuanti; // Calcul du total

        System.out.println(total); // Affichage du total

        clavier.close(); // Fermeture du Scanner après utilisation
    }
}