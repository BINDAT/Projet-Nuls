import java.util.Scanner; // Importation de la classe Scanner pour la saisie clavier

class TestReduc2 {
    
    public static void main(String args[]) {
        Scanner clavier = new Scanner(System.in); // Création d'un objet Scanner pour lire les entrées utilisateur via le clavier
        int age; // Déclaration de la variable age
        double dPrix = 0.00; // Déclaration et initialisation de la variable dPrix
        char cBon; // Déclaration de la variable cBon

        System.out.print("Quel est votre âge ?");
        age = clavier.nextInt(); // Lecture de l'âge entré par l'utilisateur et stockage dans la variable age

        System.out.print("Avez-vous un bon de reduction ? (O/N)");
        cBon = clavier.findWithinHorizon(".", 0).charAt(0); // Lecture du caractère entré par l'utilisateur et stockage dans la variable cBon

        if (age >= 12 && age < 65) {
            dPrix = 9.25; // Prix de base pour les âges entre 12 et 64 ans
                
            if (cBon == 'O' || cBon == 'o') {
                dPrix -= 2.00; // Réduction de 2.00€ si l'utilisateur a un bon de réduction
            }
        } else {
            dPrix = 5.25; // Prix de base pour les autres âges
        }
        
        System.out.print("Vous devez ");
        System.out.print(dPrix); // Affichage du prix à payer
        System.out.print("€.");
        System.out.println("Bon spectacle !");

        clavier.close(); // Fermeture du scanner pour éviter les fuites de ressources
    }
}