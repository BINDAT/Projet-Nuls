import java.util.Random;

class TraiteCompte {

    public static void main(String args[]) {
        
        Random monGenAlea = new Random();
        Compte unCompte;

        for (int i = 0; i < 3; i++){
            unCompte = new Compte();

            unCompte.sPatro = "" +
                (char) (monGenAlea.nextInt(26) + 'A') +
                (char) (monGenAlea.nextInt(26) + 'a') +
                (char) (monGenAlea.nextInt(26) + 'a');

            unCompte.iID = monGenAlea.nextInt(10000);
            unCompte.dSolde = monGenAlea.nextInt(10000);
            unCompte.afficher();
        }
    }
}