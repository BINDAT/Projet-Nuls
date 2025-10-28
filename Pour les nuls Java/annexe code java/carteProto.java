//Code préliminaire - NON FINALISÉ
import java.util.Random;
int carte, total = 0;

class Deck {
    public static void main (String args[]){
        int carte, total;
        Random monGenAlea = new Random();
System.out.println(carte+total);
while (total < 21) {
    carte = monGenAlea.nextInt(10) + 1;
    
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