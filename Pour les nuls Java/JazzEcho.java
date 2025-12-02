import java.util.Scanner; // Importation de la classe Scanner pour la saisie clavier

class JazzEcho { // Classe principale pour l'écho de la saisie utilisateur
    
    public static void main(String args[]) { // Méthode principale du programme
        Scanner clavier = new Scanner(System.in); // Création d'un objet Scanner pour lire les entrées utilisateur
        String sMaChaine; // Variable pour stocker la chaîne de caractères saisie par l'utilisateur

        System.out.print("Une petite dédicace ? : "); // Demande à l'utilisateur de saisir une chaîne
        sMaChaine = clavier.nextLine(); // Lecture de la chaîne saisie par l'utilisateur
        System.out.println(sMaChaine); // Affichage de la chaîne saisie

        clavier.close(); // Fermeture du scanner pour éviter les fuites de ressources
    }
}