import java.util.Scanner;

class CalmerPlus2Momes {

    public static void main(String[] args) {
        Scanner clavier = new Scanner(System.in);
        int nBouleGom;
        int nMome;
        int nBouleMome;
        
        System.out.print
            ("Combien de boules de gomme ? Combien d'enfants ? ");

        nBouleGom = clavier.nextInt();
        nMome = clavier.nextInt();

        nBouleMome = nBouleGom / nMome;

        System.out.print("Chaque enfant reçois ");
        System.out.print(nBouleMome);
        System.out.println(" boule de gomme.");

        clavier.close();
    }
}