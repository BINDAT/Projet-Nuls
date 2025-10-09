import java.util.Scanner; // importation de la classe Scanner pour la saisie au clavier
import java.util.Random; // importation de la classe Random pour la génération de nombres aléatoires
import static java.lang.System.out; // importation de la classe System pour l'affichage à l'écran

class Commuteur {
    
    public static void main(String args[]) {
        Scanner clavier = new Scanner(System.in); // création d'un objet Scanner pour la saisie au clavier
        Random monGenAlea = new Random(); // création d'un objet Random pour la génération de nombres aléatoires
        int nAleatoire; // déclaration d'une variable pour stocker le nombre aléatoire

        out.print("Tapez votre question, mon enfant :");
        clavier.nextLine(); // lecture de la question (inutile dans ce programme)

        nAleatoire = monGenAlea.nextInt(10) + 1;

        switch (nAleatoire) {
            case 1:
                out.println("Oui c'est évident.");
                break; // fin du cas 1 du switch
            
            case 2:
                out.println("Non. Et ne posez plus la question.");
                break; // fin du cas 2 du switch

            case 3:
                out.print("Oye Oye");
                out.println(" Trois sacs pleins.");
                break; // fin du cas 3 du switch

            case 4:
                out.print("Qu'est-ce que  vous ne comprenez pas ");
                out.println(" dans le mot 'non' ?");
                break; // fin du cas 4 du switch
            
            case 5:
                out.println("Pas de chance, Hortense.");
                break; // fin du cas 5 du switch

            case 6:
                out.println("Sûr et certain.");
                break; // fin du cas 6 du switch
            
            case 7:
                out.print("Oui mais seulement si");
                out.println(" vous êtes gentil avec moi");
                break; // fin du cas 7 du switch
            
            case 8:
                out.print("Oui (si ça vous fait plaisir).");
                break; // fin du cas 8 du switch
            
            case 9:
                out.print("Non pas avant que");
                out.println(" la marée soit basse");
                break; // fin du cas 9 du switch
            
            case 10:
                out.print("Non pas avant que");
                out.println(" la marée soit haute");
                break; // fin du cas 10 du switch
            
            default:
                out.print("Vous pensez que vous");
                out.print(" avez des problèmes ?");
                out.print(" mon générateur de nombres");
                out.print(" aléatoires est en panne !");
                break; // fin du cas par défaut du switch
        }

        out.println("Au revoir !");

        clavier.close(); // fermeture de l'objet Scanner
    }
}
