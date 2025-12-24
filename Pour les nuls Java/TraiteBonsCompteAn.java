import java.util.Random;

class TraiteBonsCompteAn {
    
    public static void main(String args[]) {
        Random monGenAlea = new Random();
        BonCompteAn unCompte;
        double dTxInt;
        int iAns = 3;

        for (int i= 0; i < 3; i++) {
            unCompte = new BonCompteAn();
            unCompte.sPatro = "" +
            (char) (monGenAlea.nextInt(26) + 'A') +
            (char) (monGenAlea.nextInt(26) + 'a') +
            (char) (monGenAlea.nextInt(26) + 'a');
        unCompte.id = monGenAlea.nextInt(10000);
        unCompte.dSolde = monGenAlea.nextInt(10000);

        unCompte.afficher();

        dTxInt = monGenAlea.nextInt(5);
        unCompte.ajInterets(dTxInt, iAns); // Deux params !

        unCompte.afficher();
        System.out.println();
        }
    }
}