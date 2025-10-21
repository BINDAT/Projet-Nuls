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
            ;
            case 2:
            ;
            case 3:
            ;
            case 4:
            ;
            case 5:
            ;
            case 6:
            ;
            case 7:
            ;
            case 8:
            ;
            case 9:
            ;
            case 10:
            ;
            default:
            ;
        }
        
        out.println("Au revoir !");
        
        clavier.close();
    }
}