import java.util.Scanner; // importation de la classe Scanner pour la saisie au clavier
import static java.lang.System.out; // importation de la classe System pour l'affichage à l'écran

class TabloScore { // début de la classe TabloScore
    enum QuiGagne {LOCAUX, VISITEURS, AUCUN} // énumération pour représenter le résultat du match

    public static void main(String args[]) {
        Scanner clavier = new Scanner(System.in); // création d'un objet Scanner pour la saisie au clavier
        int canaris, estac; // déclaration des variables pour les scores des équipes
        QuiGagne eQui; // déclaration de la variable pour le résultat du match

        out.print("Résultats des Jaunes et des Bleus ");
        canaris = clavier.nextInt(); // saisie du score des Jaunes
        estac = clavier.nextInt(); // saisie du score des Bleus
        out.println(); // saut de ligne

        if (canaris > estac) {
            eQui = QuiGagne.VISITEURS; // les Jaunes gagnent
            out.println("Victoire des Jaunes :-(");
        } else if (estac > canaris){
            eQui = QuiGagne.LOCAUX; // les Bleus gagnent
            out.println("Les Bleus gagnent :-)");
        } else {
            eQui = QuiGagne.AUCUN; // match nul
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

        clavier.close(); // fermeture de l'objet Scanner pour éviter les fuites de mémoire
    }
}
