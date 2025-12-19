import java.text.NumberFormat;
import static java.lang.System.out;

class BonCompte {
    String sPatro;
    int id;
    double dSolde;

    void ajInterets(double dTaux) {
        out.print("Ajout de ");
        out.print(dTaux);
        out.println(" pour cent...");
        dSolde += dSolde * (dTaux / 100.0);
    }

    void afficher() {
        NumberFormat nfDevise = NumberFormat.getCompactNumberInstance();
        out.print("Le compte portant le nom ");
        out.print(sPatro);
        out.print(" et dont l'identificateur est ");
        out.print(id);
        out.print(" a un solde de ");
        out.println(nfDevise.format(dSolde));
    }
}