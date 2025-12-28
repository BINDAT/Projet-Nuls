import java.util.Random;
import java.text.NumberFormat;

class MethRenvoiVal {
    public static void main(String args[]) {
        Random monGenAlea = new Random();
        ClasseMethRenVal unCompte;
        double dTxInt;
        double dIntAnnuels;

        for (int i = 0; i < 3; i++){
            unCompte = new ClasseMethRenVal();

            unCompte.sPatro = "" +
            (char) (monGenAlea.nextInt(26) + 'A') +
            (char) (monGenAlea.nextInt(26) + 'a') +
            (char) (monGenAlea.nextInt(26) + 'a');
        unCompte.iId = monGenAlea.nextInt(10000);
        unCompte.dSolde = monGenAlea.nextInt(10000);

        unCompte.afficher();

        dTxInt = monGenAlea.nextInt(5);
        dIntAnnuels = unCompte.lireInterets(dTxInt);
        
        System.out.print("Montant des intérêts annuels : ");
        System.out.println(dIntAnnuels);
        System.out.println();
        } 
    }
}