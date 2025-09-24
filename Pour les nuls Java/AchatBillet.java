import java.util.Scanner; // pour utiliser Scanner

class AchatBillet {

    public static void main(String args[]){
        Scanner clavier = new Scanner(System.in); // pour lire au clavier
        int age; // âge de la personne
        double dPrix = 0.00; // prix du billet

        System.out.print("Quel est votre âge ? ");
        age = clavier.nextInt(); // lire un entier au clavier

        if (age >= 12 && age < 65) {
            dPrix = 9.25; // prix normal

        }
        if (age < 12 || age >= 65){
            dPrix = 5.25; // prix réduit

        }
        System.out.print("Vous devez ");
        System.out.print(dPrix); // afficher le prix
        System.out.print("€. ");
        System.out.println("Bon spectacle !");

        clavier.close(); // fermer le scanner
    }
}