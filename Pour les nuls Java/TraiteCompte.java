import java.util.Random; // Import de la bibliothèque Random pour l'aléatoire

class TraiteCompte {

    public static void main(String args[]) {
        
        Random monGenAlea = new Random(); // Variable pour l'aléatoire
        Compte unCompte; // Variable multi usage

        for (int i = 0; i < 3; i++){
            unCompte = new Compte();

            unCompte.sPatro = "" +
                (char) (monGenAlea.nextInt(26) + 'A') +
                (char) (monGenAlea.nextInt(26) + 'a') +
                (char) (monGenAlea.nextInt(26) + 'a');

            unCompte.iID = monGenAlea.nextInt(10000); // prend une val aléatoire pour iID 
            unCompte.dSolde = monGenAlea.nextInt(10000); // prend une val aléatoire pour le solde
            unCompte.afficher(); // affiche les val de la var UnCompte
        }
    }
}