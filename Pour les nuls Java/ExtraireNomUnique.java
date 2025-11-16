import java.util.Scanner; // Importation de la classe Scanner pour la lecture de fichiers
import java.io.File; // Importation de la classe File pour la gestion des fichiers
import java.io.FileNotFoundException; // Importation de l'exception FileNotFoundException pour la gestion des erreurs
import java.io.PrintStream; // Importation de la classe PrintStream pour écrire dans un fichier

class ExtraireNomUnique {
    
    public static void main(String args[]) 
                        throws FileNotFoundException{
        
        Scanner dsqLecteur = 
            new Scanner(new File("email.txt")); // Création d'un Scanner pour lire le fichier email.txt
        PrintStream dsqScripteur = 
            new PrintStream("usernames.txt"); // Création d'un PrintStream pour écrire dans le fichier usernames.txt
        char cSymb = 
            dsqLecteur.findWithinHorizon(".",0).charAt(0); // Lecture du premier caractère du fichier email.txt
        
        while (cSymb != '@') {
            dsqScripteur.print(cSymb);
            cSymb = dsqLecteur.findWithinHorizon(".",0).charAt(0); // Lecture du caractère suivant du fichier email.txt
        }

        dsqScripteur.println(); // Saut de ligne dans le fichier usernames.txt

        dsqLecteur.close(); // Fermeture du Scanner
        dsqScripteur.close(); // Fermeture du PrintStream
    }
}
