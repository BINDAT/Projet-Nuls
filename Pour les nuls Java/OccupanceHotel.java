import java.util.Scanner; // Importation de la classe Scanner pour la lecture de fichiers
import java.io.File; // Importation de la classe File pour manipuler les fichiers
import java.io.FileNotFoundException; // Importation de l'exception FileNotFoundException afin de la gérer
import static java.lang.System.out; // Importation statique de System.out pour simplifier les appels d'impression

class OccupanceHotel {

    public static void main(String args[]) // Méthode principale
                        throws FileNotFoundException{ // Déclaration que la méthode peut lancer une exception FileNotFoundException
        
        Scanner dsqLecteur = new Scanner(new File("occupance")); // Création d'un objet Scanner pour lire le fichier "occupance"
        out.print("Chambre\tPersonnes"); // Impression de l'en-tête du tableau

        for (int nCham = 0; nCham < 10; nCham++) { // Boucle pour chaque chambre de 0 à 9
            out.print(nCham); // Impression du numéro de la chambre
            out.print("\t"); // Impression d'une tabulation pour séparer les colonnes
            out.println(dsqLecteur.nextInt()); // Lecture et impression du nombre de personnes dans la chambre
        }

        dsqLecteur.close(); // Fermeture du Scanner pour libérer les ressources
    }
}