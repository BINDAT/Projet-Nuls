import java.util.Scanner;
import static java.lang.System.out;

class TestMo2PaDeboguer {

    public static void main(String args[]) {
        Scanner clavier = new Scanner(System.in);
        String sSecret = "espadon";
        String sSaisie;

        out.print("Quel est le mot de passe ? ");
        sSaisie = clavier.next();

        out.println();
        out.print("Vous avez tapé    ");
        out.println(sSaisie);
        out.print("Et le mot de passe est ");
        out.println(sSecret);
        out.println();

        if (sSecret == sSaisie) {
            out.println("Tout va bien !");
        } else {
            out.print("Seriez-vous une menace ? ");
        }

        clavier.close();
    }    
}