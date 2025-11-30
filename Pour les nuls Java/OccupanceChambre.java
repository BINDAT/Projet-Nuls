import java.util.Scanner; // Importation de la classe Scanner pour la lecture de données depuis le clavier et un fichier
import java.io.File; // Importation de la classe File pour la gestion des fichiers
import java.io.FileNotFoundException; // Importation de l'exception FileNotFoundException pour gérer les erreurs de fichier
import static java.lang.System.out; // Importation statique de System.out pour simplifier les appels d'impression

public class OccupanceChambre { // Déclaration de la classe principale

    public static void main(String args[]) throws FileNotFoundException{ // Méthode principale pouvant lancer une exception si le fichier n'est pas trouvé
        
        Scanner clavier = new Scanner(System.in); // Création d'un objet Scanner pour lire les entrées clavier
        Scanner dsqLecteur = new Scanner(new File("occupance")); // Création d'un objet Scanner pour lire les données depuis le fichier "occupance"
        int nChoixChambre; // Déclaration d'une variable pour stocker le choix de la chambre

        out.print("Quelle chambre ?"); // Demande à l'utilisateur de saisir le numéro de la chambre
        nChoixChambre = clavier.nextInt(); // Lecture du numéro de la chambre choisi par l'utilisateur

        for(int nCham = 0; nCham < nChoixChambre; nCham++){ // Boucle pour parcourir les chambres jusqu'à la chambre choisie
            
            dsqLecteur.nextInt(); // Lecture et ignorance des données des chambres précédentes
        }

        out.print("La Chambre "); // Affichage du numéro de la chambre choisie
        out.print(nChoixChambre); // Affichage du numéro de la chambre choisie
        out.print(" a "); // Affichage du texte intermédiaire
        out.print(dsqLecteur.nextInt()); // Lecture et affichage du nombre de personnes dans la chambre choisie
        out.println(" personne(s)."); // Affichage du texte final

        dsqLecteur.close(); // Fermeture du scanner de fichier pour libérer les ressources
        clavier.close(); // Fermeture du scanner clavier pour libérer les ressources
    }
}