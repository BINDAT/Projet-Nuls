// Ce code ne fonctionne pas:
import java.util.Scanner;
import static java.lang.System.out;

class TestMo2PaKC {
    
    public static void main(String[] args) {
        Scanner clavier = new Scanner(System.in);
        String sSecret = "espadon";
        String sSaisie;

        out.print("Quel est le mot de passe ? ");
        sSaisie = clavier.next();

        if (sSecret == sSaisie) {
            out.println("Tout va bien !");
        } else {
            out.println("Vous êtes une menace.");
        }

        clavier.close();
    }
}