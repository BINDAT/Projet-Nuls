import java.util.Random;

class Divination {
    public static void main(String[] args) {
        Random monGenRandom = new Random();
        int nAleatoire = monGenRandom.nextInt(10) +1;

        if (nAleatoire == 7) {
            System.out.println("Vous êtes l'heureux  gagnant !");
        }
        System.out.println(nAleatoire);
    }    
}
