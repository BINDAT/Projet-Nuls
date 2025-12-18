import java.util.Random;

class TraiteBonsComptes {
    
    public static void main(String args[]) {
        Random monGenAlea = new Random();
        BonCompte unCompte;
        double dTxInter;

        for (int i = 0; i < 3; i++){
            unCompte = new BonCompte();

            unCompte.sPatro = "" +
                (char) (monGenAlea.nextInt(26) + 'A') +
                (char) (monGenAlea.nextInt(26) + 'a') +
                (char) (monGenAlea.nextInt(26) + 'a');
            unCompte.id = monGenAlea.nextInt(10000);
            unCompte.dSolde = monGenAlea.nextInt(10000);

            unCompte.afficher();

            dTxInter = monGenAlea.nextInt(5);
            unCompte.ajInterets(dTxInter);

            unCompte.afficher();
            System.out.println();
        }
    }
}