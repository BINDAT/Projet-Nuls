/*
 * Ce n'est pas du bon code. Le programmeur a oublié
 * plusieurs instruction break.
 */
import java.util.Scanner; // Pour la saisie au clavier
import java.util.Random; // Pour
import static java.lang.System.out; // Pour simplifier les affichages

public class OubliBreak {

    public static void main(String args[]) {
        Scanner clavier = new Scanner(System.in); // Pour la saisie au clavier
        Random monGenAlea = new Random(); // Pour le générateur de nombres aléatoires
        int nAleatoire; // Pour stocker le nombre aléatoire

        out.print("Tapez votre question, mon enfant : ");
        clavier.nextLine();

        nAleatoire = monGenAlea.nextInt(10) + 1; // Nombre aléatoire entre 1 et 10

        switch (nAleatoire) {
            case 1:
                out.println("Oui. C'est évident.");
            
            case 2:
                out.println("Non. Et ne posez plus cette question.");
            
            case 3:
                out.print("Oye, Oye !");
                out.println(" Trois sacs pleins.");

            case 4:
                out.print("Qu'est-ce que vous ne comprenez pas");
                out.println(" dans le mot 'non' ?");
                break;

            case 5:
                out.println("Pas de chance, Hortense.");

            case 6:
                out.println("Sûr et certain.");

            case 7:
                out.print("Oui, mais seulement si");
                out.println(" vous êtes gentil avec moi.");

            case 8:
                out.println("Oui (si ça vous fait plaisir).");

            case 9:
                out.print("Non pas avant que");
                out.println(" la marée soit haute.");

            case 10:
                out.print("Non pas avant que");
                out.println(" la marée soit basse.");

            default:
                out.print("Vous pensez que vous");
                out.print(" avez des problèmes ?");
                out.print(" Mon générateur de nombres");
                out.println(" aléatoires est en panne !");
        }
        
        out.println("Au revoir !");
        
        clavier.close(); // Fermer le scanner pour éviter les fuites de mémoire
    }
}