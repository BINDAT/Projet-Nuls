import java.util.Scanner; // Importation de la classe Scanner pour la saisie clavier
import java.io.File; // Importation de la classe File pour la gestion des fichiers
import java.io.FileNotFoundException; // Importation de l'exception pour la gestion des fichiers non trouvés
import static java.lang.System.out; // Importation statique pour simplifier les appels à System.out

public class BetterShowOneRoom { // Déclaration de la classe principale
    
    public static void main(String args[]) throws FileNotFoundException{ // Début du programme principal avec gestion des exceptions de fichier
        
        Scanner clavier = new Scanner(System.in); // Création d'un objet Scanner pour lire les entrées utilisateur
        Scanner dsqLecteur = new Scanner(new File("occupance")); // Création d'un objet Scanner pour lire le fichier "occupance"
        int nChoixChambre; // Variable pour stocker le choix de la chambre de l'utilisateur

        out.print("Quelle chambre ?"); // Demande à l'utilisateur de choisir une chambre
        nChoixChambre = clavier.nextInt(); // Lecture du choix de la chambre de l'utilisateur

        for(int nCham = 0; nCham < nChoixChambre && dsqLecteur.hasNext(); nCham++){ // Boucle pour parcourir les chambres jusqu'à la chambre choisie
            out.print("La Chambre "); // Affichage du numéro de la chambre
            out.print(nChoixChambre); // Affichage du numéro de la chambre choisie
            out.print(" a "); // Affichage du texte intermédiaire
            out.print(dsqLecteur.nextInt()); // Lecture et affichage du nombre de personnes dans la chambre choisie
            out.println(" personne(s)."); // Fin de la ligne d'affichage
        }

        clavier.close(); // Fermeture du scanner pour éviter les fuites de ressources
        dsqLecteur.close(); // Fermeture du scanner de fichier pour éviter les fuites de ressources
    }
}
