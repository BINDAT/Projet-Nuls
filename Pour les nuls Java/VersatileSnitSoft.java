import java.util.Scanner;

class VersatileSnitSoft {
    public static void main(String[] args) {
        double montant; // Déclaration d'une variable de type double pour stocker le montant à prélever
        Scanner clavier = new Scanner(System.in); // Création d'un objet Scanner pour la saisie au clavier

        System.out.print("Quel est le prix de bidule ? ");

        montant = clavier.nextDouble(); // Lecture du montant saisi par l'utilisateur et stockage dans la variable montant
        montant = montant +25.00; // Ajout de 25.00 au montant initial pour couvrir les frais de port

        System.out.print("Nous allons prélever ");
        System.out.print(montant); // Affichage du montant total à prélever
        System.out.println(" € sur votre carte bancaire.");
        clavier.close(); // Fermeture du scanner pour éviter les fuites de ressources
    }    
}