import java.util.Scanner; // importation de la classe Scanner pour la saisie au clavier
import static java.lang.System.out; // importation de la classe System pour l'affichage à l'écran

class GagnePerdNul {
    
    public static void main(String args[]) {
        Scanner clavier = new Scanner(System.in); // création d'un objet Scanner pour la saisie au clavier
        int canaris, estac; // déclaration des variables pour les scores des équipes

        out.print("Résultats des Jaunes et des Bleus ?"); 
        canaris = clavier.nextInt(); // saisie du score des Jaunes 
        estac = clavier.nextInt(); // saisie du score des Bleus
        out.println(); // saut de ligne pour une meilleure lisibilité

         // comparaison des scores et affichage du résultat

        if (canaris > estac) { // si le score des Jaunes est supérieur à celui des Bleus
            out.println("Victoire des Jaunes...");
            out.print("Jaunes : ");
            out.println(canaris);
            out.print("Bleus : ");
            out.println(estac);
        } else if (estac > canaris) { // si le score des Bleus est supérieur à celui des Jaunes
            out.println("Victoire des Bleus...");
            out.print("Bleus : ");
            out.println(estac);
            out.print("Jaunes : ");
            out.println(canaris);
        } else { // si les scores sont égaux
            out.println("Match nul...");
            out.print("Jaunes : ");
            out.println(canaris);
            out.print("Bleus : ");
            out.println(estac);
        }
        clavier.close(); // fermeture du scanner pour éviter les fuites de mémoire
    }
}