import java.io.File; // Pour la lecture de fichiers
import java.io.FileNotFoundException; // Pour la gestion des exceptions
import java.io.PrintStream; // Pour l'écriture dans les fichiers
import java.util.Scanner; // Pour la lecture au clavier et dans les fichiers

public class LireEcrire {
    
    public static void main(String args []) 
                        throws FileNotFoundException{ // Gestion des exceptions
                            
        Scanner dsc = new Scanner(new File("rawData.txt")); // Lecture du fichier rawData.txt
        PrintStream dsqScripteur = 
            new PrintStream("cookedData.txt"); // Écriture dans le fichier cookedData.txt
        double dPrixUni, dQuanti, total; // Déclaration des variables

        dPrixUni = dsc.nextDouble(); // Lecture du prix unitaire
        dQuanti = dsc.nextInt(); // Lecture de la quantité

        total = dPrixUni * dQuanti; // Calcul du total

        dsqScripteur.println(total); // Écriture du total dans le fichier

        dsc.close(); // Fermeture du fichier lu
        dsqScripteur.close(); // Fermeture du fichier écrit
    }
}