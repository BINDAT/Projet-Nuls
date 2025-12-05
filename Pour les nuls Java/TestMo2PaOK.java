/*
* Ce programme fonctionne !
*/
import java.util.Scanner;
import static java.lang.System.out;

class TestMo2PaOK {
    public static void main(String args[]) {
        Scanner clavier = new Scanner(System.in);
        String sSecret = "espadon";
        String sSaisie;

        out.print("Quel est le mot de passe ?");
        sSaisie = clavier.next();

        if (sSecret.equals(sSaisie)) {
            out.println("Mot de passe accepté !");
        } else {
            out.println("Demi tour, et vite !");
        }

        clavier.close();
    }
}