import java.text.NumberFormat;
import static java.lang.System.out;

class BonCompteAn {
    String sPatro;
    int id;
    double dSolde;

    void ajInterets(double dTaux, int iAnnees) {
        for (int k = 1; k <= iAnnees; k++) {
            out.print("Ajout de ");
            out.print(dTaux);
            out.print(" pour cent por l'année ");
            out.print(k);

            dSolde += dSolde * (dTaux / 100.0);
        }
    }
     void afficher() {
            NumberFormat nfDevise = NumberFormat.getCurrencyInstance();

            out.print("Le compte portant le nom ");
            out.print(sPatro);
            out.print(" et dont l'identification est ");
            out.print(id);
            out.print(" a un solde de ");
            out.print(nfDevise.format(dSolde));
        }
}