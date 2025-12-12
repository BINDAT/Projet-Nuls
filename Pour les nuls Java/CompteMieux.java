import java.util.Random;
import java.text.NumberFormat;
import static java.lang.System.out;


class CompteMieux {
    String sPatro;
    int iId;
    double dSolde;

    void peupler(){
        Random monGenAlea = new Random();

        sPatro = "" +
        (char) (monGenAlea.nextInt(26) + 'A') +
        (char) (monGenAlea.nextInt(26) + 'a') +
        (char) (monGenAlea.nextInt(26) + 'a');

        iId = monGenAlea.nextInt(10000);
        dSolde = monGenAlea.nextInt(100000);
    }
    
    void afficher(){
        NumberFormat nfDevise = NumberFormat.getCurrencyInstance();

        out.print("Le compte portant le nom ");
        out.print(sPatro);
        out.print(" et dont l'identificateur est");
        out.print(iId);
        out.print(" a un solde de ");
        out.println(nfDevise.format(dSolde));
    }
}