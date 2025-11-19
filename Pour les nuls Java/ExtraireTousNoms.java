/*
 * Ce code est correct !!
 */

import java.util.Scanner; // Importation de la classe Scanner pour la lecture de fichiers
import java.io.File; // Importation de la classe File pour manipuler les fichiers
import java.io.FileNotFoundException; // Importation de l'exception FileNotFoundException pour la gestion des erreurs de fichier
import java.io.PrintStream; // Importation de la classe PrintStream pour l'écriture dans les fichiers
 
class ExtraireTousNoms {
    
    public static void main(String args[]) 
                        throws FileNotFoundException{
        
        Scanner dsqLecteur = new Scanner(new File("email.txt")); // Création d'un flux de lecture pour lire le fichier email.txt
        PrintStream dsqScripteur = new PrintStream("username.txt"); // Création d'un flux de sortie pour écrire dans le fichier username.txt
        char cSymb; // Déclaration d'une variable pour stocker les caractères lus

        while (dsqLecteur.hasNext()) {
            cSymb = dsqLecteur.findWithinHorizon(".", 0).charAt(0); // Lecture du premier caractère de la ligne

            while (cSymb != '@') {
                dsqScripteur.print(cSymb); // Écriture du caractère dans le fichier de sortie
                cSymb = dsqLecteur.findWithinHorizon(".", 0).charAt(0); // Lecture du caractère suivant pour continuer
            }
                dsqLecteur.nextLine(); // Passage à la ligne suivante dans le fichier de lecture
                dsqScripteur.println(); // Écriture d'un saut de ligne dans le fichier de sortie
            }
        dsqLecteur.close(); // Fermeture du flux de lecture
        dsqScripteur.close(); // Fermeture du flux d'écriture
    }
}