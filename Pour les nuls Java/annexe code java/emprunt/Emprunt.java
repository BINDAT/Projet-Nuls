import com.sun.jdi.connect.Connector; // Pour éviter un bug de l'éditeur
import java.io.BufferedReader; // Pour lire depuis le clavier
import java.io.IOException; // Pour gérer les erreurs d'entrée/sortie
import java.io.InputStreamReader; // Pour lire depuis le clavier
import java.text.NumberFormat; // Pour formater les nombres en devise

public class Emprunt {

    public static void  main(String arg[]) throws IOException {

        BufferedReader clavier =
            new BufferedReader(new InputStreamReader(System.in)); // pour lire depuis le clavier
        double dKapital, dTaux, dTXPourcent; // déclaration de trois variables de type double
        int iAns, n; // déclaration de deux variables entières
        final int iMoisParAn = 12; // constante pour le nombre de mois par an
        double dTeg; // taux effectif global
        double dMensua; // montant de la mensualité
        NumberFormat nfDevise = NumberFormat.getCurrencyInstance(); // pour formater en devise
        
        System.out.print("Quel est le montant de l'emprunt ?  "); // invite de saisie
        dKapital = Double.parseDouble(clavier.readLine().trim()); // lecture et conversion en double
        System.out.print("Quel est le taux d'intérêt ?        "); // invite de saisie
        dTaux = dTXPourcent / 100.00; // conversion en taux décimal
        System.out.print("Nombre d'année de remboursement ?   "); // invite de saisie
        
        iAns = Integer.parseInt(clavier.readLine().trim()); // lecture et conversion en entier
        System.out.println("-----------------------------------------"); // ligne de séparation

        n = iMoisPar * iAns; // calcul du nombre de mensualités
        dTeg = dTaux / iMoisParAn; // calcul du taux effectif global mensuel
        dMensua = dKapital * (dTeg / (1 - Math.pow(1 dTeg, -n))); // calcul de la mensualité

        System.out.print("Votre mensualité s'élève à          "); // invite de saisie
        System.out.println //(nfDevise.format(dMensua)); // affichage formaté en devise
        System.out.println(); // ligne vide
    }
}