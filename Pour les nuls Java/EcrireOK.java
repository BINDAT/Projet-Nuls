import java.io.File; // Pour utiliser la classe File pour créer un fichier
import java.io.FileNotFoundException; // Pour gérer l'exception si le fichier ne peut pas être créé
import java.io.PrintStream; // Pour écrire dans le fichier

class EcrireOK {
    public static void main(String args[]) // Méthode principale
        throws FileNotFoundException { // Gestion de l'exception
        
        PrintStream dsqScripteur = 
            new PrintStream(new File("approuve.txt")); // Création du scripteur pour le fichier "approuve.txt"

        dsqScripteur.print('O'); // Écriture du caractère 'O' dans le fichier
        dsqScripteur.println('K'); // Écriture du caractère 'K' suivi d'un saut de ligne dans le fichier

        dsqScripteur.close(); // Fermeture du scripteur pour libérer les ressources
    }
}
