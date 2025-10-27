import java.util.Random; // Importation de la classe Random pour la génération de nombres aléatoires
import static java.lang.System.out; // Importation statique de System.out pour simplifier les appels d'impression

class Lancer2Des {
    public static void main (String args[]) {
        Random monGenAlea = new Random(); // Création d'une instance de Random pour générer des nombres aléatoires
        int nDe1 = 0, nDe2 = 0; // Initialisation des variables pour les deux dés

        while (nDe1 + nDe2 != 7 && nDe1 + nDe2 != 11) {
            nDe1 = monGenAlea.nextInt(6) + 1; // Génération d'un nombre aléatoire entre 1 et 6 pour le premier dé
            nDe2 = monGenAlea.nextInt(6) + 1; // Génération d'un nombre aléatoire entre 1 et 6 pour le deuxième dé

            out.print(nDe1); // Impression du résultat du premier dé
            out.print(" "); // Impression d'un espace pour séparer les deux résultats
            out.println(nDe2); // Impression du résultat du deuxième dé
            // La boucle continue jusqu'à ce que la somme des deux dés soit 7 ou 11
        }

    out.print("Gagné !"); // Impression du message de victoire
    out.println(nDe1 + nDe2); // Impression du message de victoire avec la somme des deux dés
    }
}