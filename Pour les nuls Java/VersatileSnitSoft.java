import java.util.Scanner;

class VersatileSnitSoft {
    public static void main(String[] args) {
        double montant;
        Scanner clavier = new Scanner(System.in);

        System.out.print("Quel est le prix de bidule ? ");

        montant = clavier.nextDouble();
        montant = montant +25.00;

        System.out.print("Nous allons prélever ");
        System.out.print(montant);
        System.out.println(" € sur votre carte bancaire.");
        clavier.close();
    }    
}