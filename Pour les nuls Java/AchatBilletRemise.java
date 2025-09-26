import java.util.Scanner; // Importation de la classe Scanner pour la saisie clavier

class AchatBilletRemise {

    public static void main(String args[]) { // Début du programme principal
        Scanner clavier = new Scanner(System.in); // Création d'un objet Scanner pour lire les entrées utilisateur
        int age; // Variable pour stocker l'âge de l'utilisateur
        double dPrix = 0.00; // Variable pour stocker le prix du billet
        char cChoix; // Variable pour stocker le choix de l'utilisateur concernant le bon de réduction

        System.out.print("Quel est votre âge ? ");
        age = clavier.nextInt(); // Lecture de l'âge de l'utilisateur

        System.out.print("Avez vous un bon de réduction ? (O/N) "); // Demande si l'utilisateur a un bon de réduction
        cChoix = clavier.findWithinHorizon(".", 0).charAt(0); // Lecture du choix de l'utilisateur
        if (age >= 12 && age < 65) { // Détermination du prix en fonction de l'âge
            dPrix = 9.25; // Prix standard pour les adultes
        }
        if (age < 12 || age >=65) { // Détermination du prix en fonction de l'âge
            dPrix = 5.25; // Prix réduit pour les enfants et les seniors
        }

        if (cChoix != 'O' || cChoix != 'o') { // Application de la réduction si l'utilisateur a un bon
            dPrix -= 2.00; // Réduction de 2 euros
        }
        if (cChoix != 'O' && cChoix != 'o' &&
            cChoix != 'N' && cChoix != 'n') { // Gestion des entrées invalides
            System.out.println("Pardon ?"); // Message d'erreur pour entrée invalide
        }

        System.out.print("Vous devez ");
        System.out.print(dPrix); // Affichage du prix final
        System.out.print("€. ");
        System.out.println("Bon spectacle !");

        clavier.close(); // Fermeture du scanner pour éviter les fuites de ressources
    }
}