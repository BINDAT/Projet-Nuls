/*
* Ce programme fonctionne !
*/
import java.util.Scanner; // Importation de la classe Scanner pour la saisie au clavier
import static java.lang.System.out; // Importation statique de System.out pour simplifier les appels d'affichage

class TestMo2PaOK { // Déclaration de la classe principale
    public static void main(String args[]) { // Méthode principale
        Scanner clavier = new Scanner(System.in); // Création d'un objet Scanner pour la saisie au clavier
        String sSecret = "espadon"; // Définition du mot de passe secret
        String sSaisie; // Variable pour stocker la saisie de l'utilisateur

        out.print("Quel est le mot de passe ?"); // Invitation à saisir le mot de passe
        sSaisie = clavier.next(); // Lecture de la saisie utilisateur

        if (sSecret.equals(sSaisie)) { // Comparaison de la saisie avec le mot de passe secret
            out.println("Mot de passe accepté !"); // Message en cas de succès
        } else {
            out.println("Demi tour, et vite !"); // Message en cas d'échec
        }

        clavier.close(); // Fermeture du scanner pour libérer les ressources
    }
}