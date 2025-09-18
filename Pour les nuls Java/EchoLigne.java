import java.util.Scanner; // importation de la classe Scanner

class EchoLigne{
    public static void main(String args[]){ // méthode principale
        Scanner clavier = new Scanner(System.in); // création d'un Scanner pour la saisie clavier

        System.out.println(clavier.nextLine()); // lecture et affichage d'une ligne saisie au clavier

        clavier.close(); // fermeture du Scanner (clé de sécurité pour libérer les ressources associées)
    }
}
