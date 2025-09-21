import java.util.Scanner; // pour Scanner clavier
import static java.lang.System.in; // pour System.in et System.out
import static java.lang.System.out; // pour System.in et System.out


class DeuxEquipes {
    
    public static void main(String arg[]) {
        Scanner clavier = new Scanner(in); // pour Scanner clavier
        int nBleus, nJaunes; // nbre de points des Bleus et des Jaunes

        out.print(" Résultats des Bleus et des Jaunes ? "); // invite de saisie
        nBleus = clavier.nextInt(); // lecture du nbre de points des Bleus
        nJaunes = clavier.nextInt(); // lecture du nbre de points des Jaunes
        out.println(); // ligne vide
        
        if (nJaunes > nBleus) { // si les Jaunes ont plus de points
            out.print("Jaunes : ");
            out.println(nJaunes);
            out.print("Bleus : ");
            out.println(nBleus);
        } else { // si les Bleus ont plus de points ou égalité
            out.print("Bleus : ");
            out.println(nBleus);
            out.print("Jaunes : ");
            out.println(nJaunes);
        }

        clavier.close(); // fermeture du Scanner clavier
    }
}