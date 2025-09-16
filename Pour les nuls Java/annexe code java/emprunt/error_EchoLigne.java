import java.util.Scanner;

class EchoLigne {

    public static void main(String args[]){

    } /*Erreur ici des accolades en trop*/ {
        Scanner clavier = new Scanner(System.in); // création d'un Scanner pour lire sur l'entrée standard
        System.out.println(clavier.nextLine()); // lit une ligne et l'affiche
        clavier.close(); // ferme le Scanner
    }
}