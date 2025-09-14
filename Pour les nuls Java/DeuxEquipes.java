import java.util.Scanner;
import static java.lang.System.in;
import static java.lang.System.out;


class DeuxEquipes {
    
    public static void main(String arg[]) {
        Scanner clavier = new Scanner(in);
        int nBleus, nJaunes;

        out.print(" Résultats des Bleus et des Jaunes ? ");
        nBleus = clavier.nextInt();
        nJaunes = clavier.nextInt();
        out.println();
        
        if (nJaunes > nBleus) {
            out.print("Jaunes : ");
            out.println(nJaunes);
            out.print("Bleus : ");
            out.println(nBleus);
        } else {
            out.print("Bleus : ");
            out.println(nBleus);
            out.print("Jaunes : ");
            out.println(nJaunes);
        }

        clavier.close();
    }
}