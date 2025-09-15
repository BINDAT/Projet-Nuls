import java.util.Scanner; // import de la classe Scanner

class CompterMonnaie {
    public static void main(String[] args) { // début du programme
        Scanner clavier = new Scanner(System.in); // création d'un objet Scanner
        int vingtcinq, dix, cinq, cents; // nombre de pièces
        int reste, total; // reste à distribuer, total en centimes

        System.out.print("Combien avez-vous, en centimes ? ");
        total = clavier.nextInt(); // lecture du total en centimes

        vingtcinq = total / 25; // nombre de pièces de 0,25 euro
        reste = total % 25; // reste à distribuer

        dix = reste / 10; // nombre de pièces de 0,10 euro
        reste = reste % 10; // reste à distribuer

        cinq = reste / 5; // nombre de pièces de 0,05 euro
        reste = reste % 5; // reste à distribuer

        cents = reste; // nombre de pièces de 0,01 euro

        System.out.println(); // ligne vide
        System.out.println
            ("Pour " + total + " centimes, vous avez"); // affichage du total
        System.out.println(vingtcinq + " pièce de 0,25"); // affichage du nombre de pièces
        System.out.println(dix + " pièce de 0,10"); // affichage du nombre de pièces
        System.out.println(cinq + " pièce de 0,05"); // affichage du nombre de pièces
        System.out.println(cents + " pièce de 0,01"); // affichage du nombre de pièces

        clavier.close(); // fermeture du flux d'entrée
    }
}
