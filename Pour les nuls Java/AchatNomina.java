import java.util.Scanner; // Importation de la classe Scanner pour la lecture de l'entrée utilisateur
import static java.lang.System.out; // Importation de la classe Scanner pour la lecture de l'entrée utilisateur

class AchatNomina { // Classe AchatNomina pour gérer les achats avec nom et montant
    
    public static void main(String args[]) { // Méthode principale pour exécuter le programme
        Scanner clavier = new Scanner(System.in); // Création d'un Scanner pour lire l'entrée utilisateur
        String sNomComplet; // Variable pour stocker le nom complet du client
        double dAPayer; // Variable pour stocker le montant à payer

        out.print("Nom complet du client : "); // Demande du nom complet du client
        sNomComplet = clavier.nextLine(); // Lecture du nom complet du client
        out.print("Montant : "); // Demande du montant à payer
        dAPayer = clavier.nextDouble(); // Lecture du montant à payer

        out.println(); // Saut de ligne pour une meilleure lisibilité
        out.print("Le total pour "); // Affichage du nom complet et du montant à payer
        out.print(sNomComplet); // Affichage du nom complet du client
        out.print(" est de "); // Affichage du montant à payer
        out.print(dAPayer); // Affichage du montant à payer
        out.println("."); // Affichage d'un point final pour terminer la phrase

        clavier.close(); // Fermeture du Scanner pour libérer les ressources
    }
}
