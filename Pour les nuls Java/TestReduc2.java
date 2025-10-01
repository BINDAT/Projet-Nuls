import java.util.Scanner;

class TestReduc2 {
    
    public static void main(String args[]) {
        Scanner clavier = new Scanner(System.in);
        int age;
        double dPrix = 0.00;
        char cBon;

        System.out.print("Quel est votre âge ?");
        age = clavier.nextInt();

        System.out.print("Avez-vous un bon de reduction ? (O/N)");
        cBon = clavier.findWithinHorizon(".", 0).charAt(0);

        if (age >= 12 && age < 65) {
            dPrix = 9.25; 
                
            if (cBon == 'O' || cBon == 'o') {
                dPrix -= 2.00;
            }
        } else {
            dPrix = 5.25;
        }
        
        System.out.print("Vous devez ");
        System.out.print(dPrix);
        System.out.print("€.");
        System.out.println("Bon spectacle !");

        clavier.close();
    }
}