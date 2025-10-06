import java.util.Scanner;
import static java.lang.System.out;

class TabloScore {
    enum QuiGagne {LOCAUX, VISITEURS, AUCUN}

    public static void main(String args[]) {
        Scanner clavier = new Scanner(System.in);
        int canaris, estac;
        QuiGagne eQui;

        out.print("Résultats des Jaunes et des Bleus ");
        canaris = clavier.nextInt();
        estac = clavier.nextInt();
        out.println();

        if (canaris > estac) {
            eQui = QuiGagne.VISITEURS;
            out.println("Victoire des Jaunes :-(");
        } else if (estac > canaris){
            eQui = QuiGagne.LOCAUX;
            out.println("Les Bleus gagnent :-)");
        } else {
            eQui = QuiGagne.AUCUN;
            out.println("C'est un match nul :-|");
        }

        out.println();
        out.println("Ce jeu vous est offert par SnitSoft");
        out.println("votre partenaire mineur.");
        out.println();

    }
}
