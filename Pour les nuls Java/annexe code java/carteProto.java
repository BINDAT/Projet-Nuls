//Code préliminaire - FINALISÉ
import java.util.Random; // Importation de la classe Random

class BlackJack {
    public static void main (String args[]){
        int carte, total = 0; // Initialisation des variables
        Random monGenAlea = new Random(); // Création d'un générateur de nombres aléatoires

while (total < 21) {
    carte = monGenAlea.nextInt(10) + 1; // Génération d'une carte entre 1 et 10
    total = total += carte; // Ajout de la carte au total
    System.out.print(carte); // Affichage de la carte tirée
    System.out.print("       "); // Espacement
    System.out.println(total); // Affichage du total actuel
    }
    if (total == 21) {
            System.out.println("Vous gagnez ;-)");
        } else {
            System.out.println("Vous perdez :-(");
        }
    }
}