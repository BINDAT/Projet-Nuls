import java.util.Scanner;

public class GetInput {
    
    public static void main(String[] args) {
        Scanner Keyboard = new Scanner(System.in); // création d'un objet Scanner pour la saisie au clavier

        System.out.println(Keyboard.next()); // lecture et affichage du premier mot saisi 
        System.out.println(Keyboard.next()); // lecture et affichage du deuxième mot saisi
        System.out.println(Keyboard.nextLine()); // lecture et affichage de la ligne suivante

        Keyboard.close(); // fermeture du scanner pour éviter les fuites de ressources
    }
}
