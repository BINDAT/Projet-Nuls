import java.text.NumberFormat;
import static java.lang.System.out;


class Compte {
    String sPatro;
    int iID;
    double dSolde;

    void afficher(){
        NumberFormat nfDevise =
            NumberFormat.getCompactNumberInstance();

        out.print("Le compte portant le nom ");
        out.print(sPatro);
        out.print(" et dont l'identificateur est ");
        out.print(iID);
        out.print(" a un solde de ");
        out.println(nfDevise.format(dSolde));
    }
}