import java.text.NumberFormat; // Pour la mise en forme des devises
import static java.lang.System.out; // Pour simplifier les instructions d'affichage


class ClasseMethRenVal {
    String sPatro; // nom du propriétaire
    int iId;       // identificateur du compte
    double dSolde; // solde du compte

    double lireInterets(double dTaux) { // méthode qui calcule les intérêts
        double dInter; // intérêts calculés

        out.print("Application de "); // Pour afficher le taux d'intérêt
        out.print(dTaux); // affiche la valeur du taux
        out.println(" %...");

        dInter = dSolde * (dTaux / 100.0); // calcul des intérêts avec le taux fourni
        return dInter; // retourne la valeur des intérêts calculés
    }

    void afficher() {
        NumberFormat nfDevise = NumberFormat.getCurrencyInstance(); // pour formater les devises

        out.print("*** Le compte portant le nom ");
        out.print(sPatro);
        out.print(" et dont l'identificateur est ");
        out.print(iId);
        out.print(" a un solde de ");
        out.println(nfDevise.format(dSolde));
    }
}