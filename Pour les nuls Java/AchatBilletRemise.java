import java.util.Scanner;

class AchatBilletRemise {

    public static void main(String args[]) {
        Scanner clavier = new Scanner(System.in);
        int age;
        double dPrix = 0.00;
        char cChoix;

        System.out.print("Quel est votre âge ? ");
        age = clavier.nextInt();

        System.out.print("Avez vous un bon de réduction ? (O/N) ");
        cChoix = clavier.findWithinHorizon(".", 0).charAt(0);
        if (age >= 12 && age < 65) {
            dPrix = 9.25;
        }
        if (age < 12 || age >=65) {
            dPrix = 5.25;
        }

        if (cChoix != 'O' || cChoix != 'o') {
            dPrix -= 2.00;
        }
        if (cChoix != 'O' && cChoix != 'o' &&
            cChoix != 'N' && cChoix != 'n') {
            System.out.println("Pardon ?");
        }

        System.out.print("Vous devez ");
        System.out.print(dPrix);
        System.out.print("€. ");
        System.out.println("Bon spectacle !");

        clavier.close();
    }
}