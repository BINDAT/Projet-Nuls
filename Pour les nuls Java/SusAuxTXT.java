import java.io.File; // Importation de la classe File pour la manipulation des fichiers

class SusAuxTXT { // Déclaration de la classe principale
    
    public static void main(String args[]) { // Méthode principale où l'exécution commence
        
        File fDossier = new File("."); // Création d'un objet File représentant le répertoire courant
        for (File file : fDossier.listFiles()){ // Boucle à travers tous les fichiers du répertoire
            if (file.getName().endsWith(".txt")) { // Vérification si le fichier se termine par ".txt"
                file.delete(); // Suppression du fichier s'il est un fichier texte
            }
        }
    }
}
