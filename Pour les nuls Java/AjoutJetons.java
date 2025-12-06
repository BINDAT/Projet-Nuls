import java.util.Scanner;
import static java.lang.System.out;

class AjoutJetons {
    
    public static void main(String args[]) {
        Scanner clavier = new Scanner(System.in);
        String sReponse;
        int iJetons;

        out.print("Distribution de jetons : ");
        out.print(" (Tapez un nombre, ");
        out.print("ou tapez 'Non joueur') ");
        sReponse = clavier.nextLine();

        if (!sReponse.equals("Non joueur")) {
            iJetons = Integer.parseInt(sReponse);
            iJetons += 10;

            out.print("Vous avez maintenant ");
            out.print(iJetons);
            out.println(" jetons.");
        }

        out.println("=== Fin du programme ===");
        clavier.close();
    }
}