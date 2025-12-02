import java.util.Scanner;
import static java.lang.System.out;

class AchatNomina {
    
    public static void main(String args[]) {
        Scanner clavier = new Scanner(System.in);
        String sNomComplet;
        double dAPayer;

        out.print("Nom complet du client : ");
        sNomComplet = clavier.nextLine();
        out.print("Montant : ");
        dAPayer = clavier.nextDouble();

        out.println();
        out.print("Le total pour ");
        out.print(sNomComplet);
        out.print(" est de ");
        out.print(dAPayer);
        out.println(".");

        clavier.close();
    }
}
