import java.text.NumberFormat;
import static java.lang.System.out;


class ClasseMethRenVal {
    String sPatro;
    int iId;
    double dSolde;

    double lireInterets(double dTaux) {
        double dInter;

        out.print("Application de ");
        out.print(dTaux);
        out.println(" %...");

        dInter = dSolde * (dTaux / 100.0);
        return dInter;
    }

    void afficher() {
        NumberFormat nfDevise = NumberFormat.getCurrencyInstance();

        out.print("*** Le compte portant le nom ");
        out.print(sPatro);
        out.print(" et dont l'identificateur est ");
        out.print(iId);
        out.print(" a un solde de ");
        out.println(nfDevise.format(dSolde));
    }
}