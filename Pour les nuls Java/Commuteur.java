import java.util.Scanner;
import java.util.Random;
import static java.lang.System.out;

class Commuteur {
    
    public static void main(String args[]) {
        Scanner clavier = new Scanner(System.in);
        Random monGenAlea = new Random();
        int nAleatoire;

        out.print("Tapez votre question, mon enfant :");
        clavier.nextLine();

        nAleatoire = monGenAlea.nextInt(10) + 1;

        switch (nAleatoire) {
            case 1:
                out.println("Oui c'est évident.");
                break;
            
            case 2:
                out.println("Non. Et ne posez plus la question.");
                break;

            case 3:
                out.print("Oye Oye");
                out.println(" Trois sacs pleins.");
                break;

            case 4:
                out.print("Qu'est-ce que  vous ne comprenez pas ");
                out.println(" dans le mot 'non' ?");
                break;
            
            case 5:
                out.println("Pas de chance, Hortense.");
                break;
            
            case 6:
                out.println("Sûr et certain.");
                break;
            
            case 7:
                out.print("Oui mais seulement si");
                out.println(" vous êtes gentil avec moi");
                break;
            
            case 8:
                out.print("Oui (si ça vous fait plaisir).");
                break;
            
            case 9:
                out.print("Non pas avant que");
                out.println(" la marée soit haute");
                break;
            
            case 10:
                out.print("Non pas avant que");
                out.println(" la marée sois");
                break;
            
            default:
                out.print("Vous pensez que vous");
                out.print(" avez des problèmes ?");
                out.print(" mon générateur de nombres");
                out.print(" aléatoires est en panne !");
                break;
        }

        out.println("Au revoir !");

        clavier.close();
    }
}
