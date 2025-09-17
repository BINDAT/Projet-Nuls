import java.io.BufferedReader; // importation de la classe BufferedReader pour lire des lignes
import java.io.InputStreamReader; // importation de la classe InputStreamReader pour lire des flux d'entrée
import java.io.IOException; // importation de la classe IOException pour gérer les exceptions d'entrée/sortie

public class EchoLigne3 {
    public static void main(String[] args) // déclaration de la méthode principale
        throws IOException {
    InputStreamReader isr =
            new InputStreamReader(System.in); // création d'un InputStreamReader pour lire depuis l'entrée standard
    BufferedReader br = new BufferedReader(isr); // création d'un BufferedReader pour lire des lignes de texte
    String input = br.readLine(); // lecture d'une ligne de texte
    System.out.println(input); // affichage de la ligne lue
    }
}