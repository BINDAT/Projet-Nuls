/*
 * Ce n'est pas du bon code. Le programmeur a oublié
 * plusieurs instruction break.
 */
import java.util.Scanner;
import java.util.Random;
import static java.lang.System.out;

public class OubliBreak {

    public static void main(String args[]) {
        Scanner clavier = new Scanner(System.in);
        Random monGenAlea = new Random();
        int nAleatoire;

        out.print("Tapez votre question, mon enfant : ");
        clavier.nextLine();

        nAleatoire = monGenAlea.nextInt(10) + 1;

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
                out.println(" la marée soit haute.");

            default:
                out.;
        }
        
        out.println("Au revoir !");
        
        clavier.close();
    }
}