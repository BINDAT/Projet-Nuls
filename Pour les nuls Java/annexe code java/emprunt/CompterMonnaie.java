import java.util.Scanner;

class CompterMonnaie {
    public static void main(String[] args) {
        Scanner clavier = new Scanner(System.in);
        int vingtcinq, dix, cinq, cents;
        int reste, total;

        System.out.print("Combien avez-vous, en centimes ? ");
        total = clavier.nextInt();

        vingtcinq = total / 25;
        reste = total % 25;

        dix = reste / 10;
        reste = reste % 10;

        cinq = reste / 5;
        reste = reste % 5;

        cents = reste;

        System.out.println();
        System.out.println
            ("Pour " + total + " centimes, vous avez");
        System.out.println(vingtcinq + " pièce de 0,25");
        System.out.println(dix + " pièce de 0,10");
        System.out.println(cinq + " pièce de 0,05");
        System.out.println(cents + " pièce de 0,01");

        clavier.close();
    }
}
