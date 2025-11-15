import java.io.File; // Gérer les fichiers
import java.io.FileNotFoundException; // Gérer les exceptions de fichiers
import java.io.PrintStream; // Gérer l'écriture dans les fichiers

class JusteEcrire {
    public static void main(String args[]) 
        throws FileNotFoundException{ // Gérer les exceptions de fichiers
        // Créer un scripteur de fichier
        PrintStream dsqScripteur =
            new PrintStream("cookedData.txt"); // Créer un scripteur de fichier
            dsqScripteur.println(99.75); // Écrire un nombre dans le fichier
            dsqScripteur.close(); // Ne pas oublier de fermer le fichier
    }    
}
