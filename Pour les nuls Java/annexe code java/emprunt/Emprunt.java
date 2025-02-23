import com.sun.jdi.connect.Connector;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.text.NumberFormat;

public class Emprunt {

    public static void  main(String arg[]) throws IOException {

        BufferedReader clavier =
            new BufferedReader(new InputStreamReader(System.in));
        double dKapital, dTaux, dTXPourcent;
        int iAns, n;
        final int iMoisParAn = 12;
        double dTeg;
        double dMensua;
        NumberFormat nfDevise = NumberFormat.getCurrencyInstance();
        
        System.out.print("Quel est le montant de l'emprunt ?  ");
        dKapital = Double.parseDouble(clavier.readLine().trim());
        System.out.print("Quel est le taux d'intérêt ?        ");
        dTaux = dTXPourcent / 100.00;
        System.out.print("Nombre d'année de remboursement ?   ");
        
        iAns = Integer.parseInt(clavier.readLine().trim());
        System.out.println("-----------------------------------------");

        n = iMoisPar * iAns;
        dTeg = dTaux / iMoisParAn;
        dMensua = dKapital * (dTeg / (1 - Math.pow(1 dTeg, -n)));

        System.out.print("Votre mensualité s'élève à          ");
        System.out.println
        System.out.println();
    }
}