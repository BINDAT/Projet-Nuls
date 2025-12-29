import java.util.Random; // Importation de la classe Random
import java.text.NumberFormat; // Importation de la classe NumberFormat

class MethRenvoiVal {
    public static void main(String args[]) {
        Random monGenAlea = new Random(); // Création d'un générateur de nombres aléatoires
        ClasseMethRenVal unCompte; // Déclaration d'une variable de type ClasseMethRenVal
        double dTxInt; // Taux d'intérêt
        double dIntAnnuels; // Intérêts annuels

        for (int i = 0; i < 3; i++){
            unCompte = new ClasseMethRenVal(); // Création d'un objet de type ClasseMethRenVal

            unCompte.sPatro = "" + // Génération d'un nom aléatoire
            (char) (monGenAlea.nextInt(26) + 'A') +
            (char) (monGenAlea.nextInt(26) + 'a') +
            (char) (monGenAlea.nextInt(26) + 'a');
        unCompte.iId = monGenAlea.nextInt(10000); // Génération d'un identifiant aléatoire
        unCompte.dSolde = monGenAlea.nextInt(10000); // Génération d'un solde aléatoire

        unCompte.afficher(); // Affichage des informations du compte

        dTxInt = monGenAlea.nextInt(5); // Génération d'un taux d'intérêt aléatoire
        dIntAnnuels = unCompte.lireInterets(dTxInt); // Calcul des intérêts annuels
        
        System.out.print("Montant des intérêts annuels : ");
        System.out.println(dIntAnnuels); // Affichage des intérêts annuels
        System.out.println();
        } 
    }
}