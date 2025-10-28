import java.util.Random; // Importation de la classe Random pour la génération de nombres aléatoires
import static java.lang.System.out; // Importation statique de System.out pour simplifier les appels d'impression

class Lancer2Des {
    public static void main (String args[]) {
        Random monGenAlea = new Random(); // Création d'une instance de Random pour générer des nombres aléatoires
        int nDe1 = 0; // Initialisation des variables pour le premier dé
        int nDe2 = 0; // Initialisation des variables pour le deuxième dé

        if (nDe1 + nDe2 != 7 && nDe1 + nDe2 != 11) {
            nDe1 = monGenAlea.nextInt(6) + 1; // Génération d'un nombre aléatoire entre 1 et 6 pour le premier dé
            nDe2 = monGenAlea.nextInt(6) + 1; // Génération d'un nombre aléatoire entre 1 et 6 pour le deuxième dé
            out.print(nDe1 + " " + nDe2); // Impression des résultats des deux dés
            out.println(); // Impression d'un saut de ligne
            out.print("Gagné !" + nDe1 + " " + nDe2); // Impression du message de victoire
        
        } else {
            out.print("Perdu !" + nDe1 + " " + nDe2); // Impression du message de défaite
        }
    }
}