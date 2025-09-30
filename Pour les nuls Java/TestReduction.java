import java.util.Scanner; // importation de la classe Scanner

class TestReduction {
    
    public static void main(String args []) {
        Scanner clavier =  new Scanner(System.in); // création d'un objet Scanner pour la lecture au clavier
        int age; // déclaration d'une variable de type entier pour l'âge 
        double dPrix = 0.00; // déclaration d'une variable de type double pour le prix
        char cBon; // déclaration d'une variable de type char pour le bon de réduction

        System.out.print("Quel est votre âge ?");
        age = clavier.nextInt(); // lecture de l'âge au clavier interrompue par la touche Entrée
        
        System.out.print("Avez vous un bon de réduction ?");
        cBon = clavier.findWithinHorizon(".", 0).charAt(0); // lecture du bon de réduction au clavier interrompue par la touche Entrée

        if (age >= 12 && age <65) {
            dPrix = 9.25; // prix plein 
        }
        if (age < 12 || age >= 65) {
            dPrix = 5.25; // prix réduit
        }

        if ((cBon == 'O' || cBon == 'o') && (age >= 12 && age <65)) {
            dPrix -= 2.00; // réduction de 2€ pour les adultes avec bon de réduction
        }
    
        System.out.print("Vous devez ");
        System.out.print(dPrix); // affichage du prix à payer
        System.out.print("€.");
        System.out.println("Bon spectacle !");

        clavier.close(); // fermeture de l'objet Scanner pour libérer les ressources
    }
}