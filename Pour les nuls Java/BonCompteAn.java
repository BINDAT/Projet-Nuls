import java.text.NumberFormat; // Pour la mise en forme des devises
import static java.lang.System.out; // Pour l'affichage à l'écran

class BonCompteAn { // Déclaration de la classe
    String sPatro; // Nom du propriétaire
    int id;       // Identifiant du compte
    double dSolde; // Solde du compte

    void ajInterets(double dTaux, int iAnnees) {
        for (int k = 1; k <= iAnnees; k++) { // Boucle pour chaque année
            out.print("Ajout de "); // Affichage du taux d'intérêt
            out.print(dTaux); // en pour cent
            out.print(" pour cent pour l'année "); // et de l'année
            out.print(k); // en cours

            dSolde += dSolde * (dTaux / 100.0); // Calcul des intérêts
        }
    }
    
    void afficher() { // Méthode pour afficher les informations du compte
        NumberFormat nfDevise = NumberFormat.getCurrencyInstance(); // Format monétaire pour la devise locale

            out.print("Le compte portant le nom ");
            out.print(sPatro);
            out.print(" et dont l'identification est ");
            out.print(id);
            out.print(" a un solde de ");
            out.print(nfDevise.format(dSolde));
        }
}