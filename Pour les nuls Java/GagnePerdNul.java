import java.util.Scanner;
import static java.lang.System.out;

class GagnePerdNul {
    
    public static void main(String args[]) {
        Scanner clavier = new Scanner(System.in);
        int canaris, estac;

        out.print("Résultats des Jaunes et des Bleus ?");
        canaris = clavier.nextInt();
        estac = clavier.nextInt();
        out.println();

        if (canaris > estac) {
            out.println("Victoire des Jaunes...");
            out.print("Jaunes : ");
            out.println(canaris);
            out.print("Bleus : ");
            out.println(estac);
        } else if (estac > canaris) {
            out.println("Victoire des Bleus...");
            out.print("Bleus : ");
            out.println(estac);
            out.print("Jaunes : ");
            out.println(canaris);
        } else {
            out.println("Match nul...");
            out.print("Jaunes : ");
            out.println(canaris);
            out.print("Bleus : ");
            out.println(estac);
        }
        clavier.close();
    }
}