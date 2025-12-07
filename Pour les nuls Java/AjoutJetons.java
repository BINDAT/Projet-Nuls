import java.util.Scanner; 
import static java.lang.System.out;

class AjoutJetons {
    
    public static void main(String args[]) {
        // Création d'un objet Scanner pour lire ce que l'utilisateur tape au clavier
        Scanner clavier = new Scanner(System.in);
        String sReponse;  // Variable pour stocker la réponse de l’utilisateur
        int iJetons;      // Variable pour stocker le nombre de jetons

        // Affichage du message de demande
        out.print("Distribution de jetons : ");
        out.print(" (Tapez un nombre, ");
        out.print("ou tapez 'Non joueur') ");
        
        // Lecture de la saisie utilisateur
        sReponse = clavier.nextLine();

        // Vérifie si l'utilisateur n'a PAS tapé "Non joueur"
        if (!sReponse.equals("Non joueur")) {
            // Conversion de la chaîne en entier
            iJetons = Integer.parseInt(sReponse);
            // Ajout de 10 jetons au nombre initial
            iJetons += 10;

            // Affichage du résultat
            out.print("Vous avez maintenant ");
            out.print(iJetons);
            out.println(" jetons.");
        }

        // Message de fin
        out.println("=== Fin du programme ===");
        
        // Fermeture du scanner
        clavier.close();
    }
}
