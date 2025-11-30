import java.util.Scanner; // Importation de la classe Scanner pour la lecture de fichiers
import java.io.File; // Importation de la classe File pour la gestion des fichiers
import java.io.FileNotFoundException; // Importation de l'exception FileNotFoundException

class DispoDecroissantes { // Déclaration de la classe principale
    
    public static void main(String args[]) throws FileNotFoundException { // Méthode principale avec gestion de l'exception FileNotFoundException
        
        Scanner dsqLecteur = new Scanner(new File("occupance")); // Création d'un objet Scanner pour lire le fichier "occupance"
        int statutCh[]; // Déclaration d'un tableau pour stocker le statut des chambres
        statutCh = new int[10]; // Initialisation du tableau avec une taille de 10

        for (int nCham = 0; nCham < 10; nCham++){ // Boucle pour lire les statuts des chambres en ordre croissant
            statutCh[nCham] = dsqLecteur.nextInt(); // Lecture du statut de chaque chambre et stockage dans le tableau
        }

        for (int nCham = 9; nCham >= 0; nCham--){ // Boucle pour vérifier les chambres en ordre décroissant
            if (statutCh[nCham] == 0) { // Vérification si la chambre est vacante
                System.out.print("La Chambre "); // Affichage du numéro de la chambre
                System.out.print(nCham); // Affichage du numéro de la chambre
                System.out.println(" est vacante."); // Affichage du message indiquant que la chambre est vacante
            }
        }

        dsqLecteur.close(); // Fermeture du scanner pour libérer les ressources
    }
}