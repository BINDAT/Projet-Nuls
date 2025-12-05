import java.util.Scanner;
import static java.lang.System.out;

class TestMo3PaOK {
    public static void main(String args[]) {
        Scanner clavier = new Scanner(System.in);
        String sSecret = "espadon";
        String sSaisie = null;
        boolean bComparaison = sSecret.equals(sSaisie);

        out.print("Quel est le mot de passe ? ");
        sSaisie = clavier.next();

        if (bComparaison == true) {
            out.println("Mot de passe accepté ! " + sSaisie + " OK " + sSecret);
        } else {
            out.println("Demi tour, et vite ! " + sSaisie + " KO " + sSecret);
        }

        clavier.close();
    }
}