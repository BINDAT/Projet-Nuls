import java.util.Scanner;

class NicePrice {
    
    public static void main(String args []) {
        Scanner clavier = new Scanner(System.in);
        int age;
        double dPrix = 0.00;
        char cChoix;
        boolean bJunior, bSenior, bReduc, bPasReduc;

        System.out.print("Quel est votre âge ?");
        age = clavier.nextInt();

        System.out.print("Avez-vous un bon de réduction ? (O/N)");
        cChoix = clavier.findWithinHorizon(".", 0)
                                            .charAt(0);
        
        bJunior = age < 12;
        bSenior = age >= 65;
        bReduc = cChoix == 'O' || cChoix == 'o';
        bPasReduc = cChoix == 'N' || cChoix == 'n';

        if (!bJunior && !bSenior) {
            dPrix = 9.25;
        }
        if (bJunior || bSenior) {
            dPrix = 5.25;
        }
        if (bReduc) {
            dPrix -= 2.00;
        }
        if (!bReduc && !bPasReduc) {
            System.out.println("Pardon ?");
        }

        System.out.print("Vous devez ");
        System.out.print(dPrix);
        System.out.print("€.");
        System.out.println("Bon spectacle !");

        clavier.close();
    }
}
