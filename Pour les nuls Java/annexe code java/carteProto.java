//Code préliminaire - FINALISÉ
import java.util.Random;

class Deck {
    public static void main (String args[]){
        int carte, total = 0;
        Random monGenAlea = new Random();

while (total < 21) {
    carte = monGenAlea.nextInt(10) + 1;
    total = total += carte;
    System.out.print(carte);
    System.out.print("       ");
    System.out.println(total);
    }
    if (total == 21) {
            System.out.println("Vous gagnez ;-)");
        } else {
            System.out.println("Vous perdez :-(");
        }
    }
}