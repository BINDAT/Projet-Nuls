import java.util.Random; // Pour le générateur de nombres aléatoires

class TraiteBonsCompteAn {
    
    public static void main(String args[]) {
        Random monGenAlea = new Random(); // Générateur de nombres aléatoires
        BonCompteAn unCompte; // Référence à un BonCompteAn
        double dTxInt; // Taux d'intérêts
        int iAns = 3; // Nombre d'années pour le calcul des intérêts

        for (int i= 0; i < 3; i++) {
            unCompte = new BonCompteAn(); // Création d'un BonCompteAn
            unCompte.sPatro = "" + // Trois caractères aléatoires
            (char) (monGenAlea.nextInt(26) + 'A') + // Majuscules
            (char) (monGenAlea.nextInt(26) + 'a') + // Minuscules
            (char) (monGenAlea.nextInt(26) + 'a'); // Minuscules
        unCompte.id = monGenAlea.nextInt(10000); // Identifiant aléatoire
        unCompte.dSolde = monGenAlea.nextInt(10000); // Solde aléatoire

        unCompte.afficher(); // Affichage avant intérêts

        dTxInt = monGenAlea.nextInt(5); // Taux d'intérêts aléatoire entre 0 et 4 %
        unCompte.ajInterets(dTxInt, iAns); // Deux params !

        unCompte.afficher(); // Affichage après intérêts
        System.out.println(); // Saut de ligne
        }
    }
}