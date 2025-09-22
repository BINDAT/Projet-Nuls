import java.util.Scanner; //Bibliothèque qui sert à prendre les entrées de saisit
import java.util.Random; //Bibliothèque qui sert à générer des nombres aléatoires

class CouiOuNon {
    
    public static void main(String[] args) { //fonction public statique type void du nom main
        Scanner clavier = new Scanner(System.in); //Ici créer une variable clavier qui sert de stock d'entrée de saisit
        Random monGenAlea = new Random(); //Créer un générateur de nombre aléatoire
        int nAleatoire; //Créer une variable de type entier

        System.out.print("Tapez votre question mon enfant : ");
        clavier.nextLine();

        nAleatoire = monGenAlea.nextInt(10) +1; //La var nAleatoire reprend en mémoire un nombre aléatoire entre 1 et 10 (inclus)

        if (nAleatoire > 5) { //Si le nombre aléatoire est supérieur à 5 alors
            System.out.println("Oui c'est évident.");
        }else{
            System.out.println("Non. Et ne posez plus la question");
        }
        clavier.close(); //Ici on ferme le scanner clavier pour éviter les fuites de mémoires
    }
}
