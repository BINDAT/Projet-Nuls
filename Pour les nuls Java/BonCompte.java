import java.text.NumberFormat; // Importation de la classe NumberFormat pour le formatage des nombres
import static java.lang.System.out; // Importation statique de System.out pour simplifier les appels d'impression

class BonCompte {
    String sPatro; // Nom du titulaire du compte
    int id; // Identificateur unique du compte
    double dSolde; // Solde du compte

    void ajInterets(double dTaux) {
        out.print("Ajout de "); // Affichage du message d'ajout des intérêts
        out.print(dTaux); // Affichage du taux d'intérêt
        out.println(" pour cent..."); // Fin du message
        dSolde += dSolde * (dTaux / 100.0); // Calcul et ajout des intérêts au solde
    }

    void afficher() {
        NumberFormat nfDevise = NumberFormat.getCompactNumberInstance(); // Création d'un formateur de nombres pour les devises
        out.print("Le compte portant le nom "); // Début du message d'affichage du compte
        out.print(sPatro); // Affichage du nom du titulaire
        out.print(" et dont l'identificateur est "); // Suite du message
        out.print(id); // Affichage de l'identificateur du compte
        out.print(" a un solde de "); // Suite du message
        out.println(nfDevise.format(dSolde)); // Affichage du solde formaté
    }
}