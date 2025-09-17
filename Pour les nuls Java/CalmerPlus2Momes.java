import java.util.Scanner; // importation de la classe Scanner pour lire les entrées utilisateur

class CalmerPlus2Momes {

    public static void main(String[] args) { // déclaration de la méthode principale
        Scanner clavier = new Scanner(System.in); // création d'un objet Scanner pour lire les entrées utilisateur
        int nBouleGom; // déclaration de la variable pour le nombre de boules de gomme
        int nMome; // déclaration de la variable pour le nombre d'enfants
        int nBouleMome; // déclaration de la variable pour le nombre de boules par enfant
        
        System.out.print
            ("Combien de boules de gomme ? Combien d'enfants ? ");

        nBouleGom = clavier.nextInt(); // lecture du nombre de boules de gomme
        nMome = clavier.nextInt(); // lecture du nombre d'enfants

        nBouleMome = nBouleGom / nMome; // calcul du nombre de boules par enfant

        System.out.print("Chaque enfant reçois ");
        System.out.print(nBouleMome); // affichage du nombre de boules par enfant
        System.out.println(" boule de gomme.");

        clavier.close(); // fermeture du scanner
    }
}