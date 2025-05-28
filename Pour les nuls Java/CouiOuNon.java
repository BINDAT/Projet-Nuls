import java.util.Scanner;
import java.util.Random;

class CouiOuNon {
    
    public static void main(String[] args) {
        Scanner clavier = new Scanner(System.in);
        Random monGenAlea = new Random();
        int nAleatoire;

        System.out.print("Tapez votre question mon enfant : ");
        clavier.nextLine();

        nAleatoire = monGenAlea.nextInt(10) +1;

        if (nAleatoire > 5) {
            System.out.println("Oui c'est évident.");
        }else{
            System.out.println("Non. Et ne posez plus la question");
        }
        clavier.close();
    }
}
