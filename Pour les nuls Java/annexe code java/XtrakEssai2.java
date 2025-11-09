/*
 * Ce code marche presque, mais il reste une petite erreur.
 */
import java.util.Scanner;

class XtrakEssai2 {  

    public static void main(String args[]) {
        Scanner clavier = new Scanner(System.in); // Création d'un objet Scanner pour lire l'entrée utilisateur
        char cSymb = ' '; // Initialisation du caractère cSymb

        while (cSymb != '@') { // Boucle jusqu'à ce que cSymb soit '@'
            System.out.print(cSymb); // Affiche le caractère actuel
            cSymb = clavier.findWithinHorizon(".", 0).charAt(0); // Lit le prochain caractère
        }

        System.out.print(cSymb); // Affiche le caractère '@' une fois la boucle terminée

        clavier.close(); // Fermeture du scanner
    }
}