import java.util.Scanner;

class AchatBillet {

    public static void main(String args[]){
        Scanner clavier = new Scanner(System.in);
        int age;
        double dPrix = 0.00;

        System.out.print("Quel est votre âge ? ");
        age = clavier.nextInt();

        if (age >= 12 && age < 65) {
            dPrix = 9.25;

        }
        if (age < 12 || age >= 65){
            dPrix = 5.25;

        }
        System.out.print("Vous devez ");
        System.out.print(dPrix);
        System.out.print("€. ");
        System.out.println("Bon spectacle !");

        clavier.close();
    }
}