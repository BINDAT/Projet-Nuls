import java.util.Scanner; // Importation de la classe Scanner pour la saisie au clavier
import static java.lang.System.out; // Importation statique de System.out pour simplifier les appels d'impression

class VenteNuitee { // Déclaration de la classe principale
    
    public static void main(String args[]) { // Méthode principale où l'exécution commence
        Scanner clavier = new Scanner(System.in); // Création d'un objet Scanner pour la saisie utilisateur
        int nChambre, nPersonnes; // Déclaration des variables pour le numéro de chambre et le nombre de personnes
        int statutCh[]; // Déclaration du tableau pour stocker le statut des chambres
        statutCh = new int[10]; // Initialisation du tableau pour 10 chambres

        for (int nCham = 0; nCham < 10; nCham++){ // Boucle pour initialiser le statut de chaque chambre à 0 (libre)
            statutCh[nCham] = 0; // 0 signifie que la chambre est libre
        }

        do {
            out.print("Numéro de chambre : "); // Demande du numéro de chambre à l'utilisateur
            nChambre = clavier.nextInt(); // Lecture du numéro de chambre
            out.print("Combien de Personnes ? "); // Demande du nombre de personnes pour la chambre
            nPersonnes = clavier.nextInt(); // Lecture du nombre de personnes
            statutCh[nChambre] = nPersonnes; // Mise à jour du statut de la chambre avec le nombre de personnes

            out.println(); // Ligne vide pour la lisibilité
            out.print("Autre chambre ? "); // Demande si l'utilisateur souhaite saisir une autre chambre
            } while (clavier.findWithinHorizon(".", 0).charAt(0) == 'O'); // Continue tant que l'utilisateur répond 'O' (Oui)
        
            out.println(); // Ligne vide pour la lisibilité
            out.println("Chambres\tPersonnes"); // En-tête du tableau des chambres et du nombre de personnes
            for (int nCham = 0; nCham < 10; nCham++){ // Boucle pour afficher le statut de chaque chambre
                out.print(nCham); // Affichage du numéro de la chambre
                out.print("\t\t"); // Tabulation pour aligner les colonnes
                out.println(statutCh[nCham]); // Affichage du nombre de personnes dans la chambre
            }

            clavier.close(); // Fermeture du scanner pour libérer les ressources
        }
    }