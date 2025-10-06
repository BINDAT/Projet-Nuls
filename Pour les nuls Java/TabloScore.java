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
        out.println("dans le Chapitre 6");
        out.println("SnitSoft, essayé et recommandé");
        out.println("par de grandes marques.");
        out.println("SnitSoft vous souhaite un bon match/");
        out.println();

        if (eQui == QuiGagne.LOCAUX) {
            out.println("C'est une victoire amplement méritée ");
        }

        if (eQui == QuiGagne.VISITEURS) {
            out.println("L'arbitre nous a volé un pénalty !");
            out.println("Mais nous auront notre revanche au match retour !");
        }

        if (eQui == QuiGagne.AUCUN) {
            out.println("Un bon match nul pour la suite du championnat !");
        }

        clavier.close();
    }
}
