import java.util.Scanner; // Importation de la classe Scanner

class NicePrice {
    
    public static void main(String args []) { // Méthode principale
        Scanner clavier = new Scanner(System.in); // Scanner pour lire au clavier
        int age; // Variable pour l'âge
        double dPrix = 0.00; // Variable pour le prix
        char cChoix; // Variable pour le choix
        boolean bJunior, bSenior, bReduc, bPasReduc; // Variables booléennes pour les conditions de prix

        System.out.print("Quel est votre âge ?");
        age = clavier.nextInt(); // Lecture de l'âge au clavier

        System.out.print("Avez-vous un bon de réduction ? (O/N)");
        cChoix = clavier.findWithinHorizon(".", 0)
                                            .charAt(0); // Lecture du choix au clavier
        
        bJunior = age < 12; // Condition pour être junior
        bSenior = age >= 65; // Condition pour être senior
        bReduc = cChoix == 'O' || cChoix == 'o'; // Condition pour avoir un bon de réduction
        bPasReduc = cChoix == 'N' || cChoix == 'n'; // Condition pour ne pas avoir de bon de réduction

        if (!bJunior && !bSenior) {
            dPrix = 9.25; // Prix standard pour les adultes sans réduction
        }
        if (bJunior || bSenior) {
            dPrix = 5.25; // Prix réduit pour les juniors et seniors
        }
        if (bReduc) {
            dPrix -= 2.00; // Réduction de 2€ si on a un bon de réduction
        }
        if (!bReduc && !bPasReduc) {
            System.out.println("Pardon ?"); // Message d'erreur pour un choix invalide
        }

        System.out.print("Vous devez ");
        System.out.print(dPrix); // Affichage du prix à payer
        System.out.print("€.");
        System.out.println("Bon spectacle !");

        clavier.close(); // Fermeture du scanner pour éviter les fuites de mémoire
    }
}
