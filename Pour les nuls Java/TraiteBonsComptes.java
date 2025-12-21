import java.util.Random; // Importation de la classe Random pour la génération de nombres aléatoires

class TraiteBonsComptes { // Déclaration de la classe principale
    
    public static void main(String args[]) { // Méthode principale
        Random monGenAlea = new Random(); // Création d'un générateur de nombres aléatoires
        BonCompte unCompte; // Déclaration d'une variable de type BonCompte
        double dTxInter; // Déclaration d'une variable pour le taux d'intérêt

        for (int i = 0; i < 3; i++){ // Boucle pour traiter trois comptes
            unCompte = new BonCompte(); // Création d'une nouvelle instance de BonCompte

            unCompte.sPatro = "" +
                (char) (monGenAlea.nextInt(26) + 'A') + // Génération d'une lettre majuscule aléatoire
                (char) (monGenAlea.nextInt(26) + 'a') + // Génération d'une lettre minuscule aléatoire
                (char) (monGenAlea.nextInt(26) + 'a'); // Génération d'une lettre minuscule aléatoire
            unCompte.id = monGenAlea.nextInt(10000); // Génération d'un identificateur aléatoire
            unCompte.dSolde = monGenAlea.nextInt(10000); // Génération d'un solde aléatoire

            unCompte.afficher(); // Affichage des informations du compte

            dTxInter = monGenAlea.nextInt(5); // Génération d'un taux d'intérêt aléatoire entre 0 et 4
            unCompte.ajInterets(dTxInter); // Application des intérêts au compte

            unCompte.afficher(); // Affichage des informations du compte après l'ajout des intérêts
            System.out.println(); // Ligne vide pour séparer les comptes
        }
    }
}