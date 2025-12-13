import java.util.Random; // Importe la bibliothèque Random pour la génération de nombre aléatoire
import java.text.NumberFormat; // Importe la bibliothèque NumberFormat pour gérer les format devise
import static java.lang.System.out;


class CompteMieux { // Méthode principale
    String sPatro;
    int iId;
    double dSolde;

    void peupler(){ // fonction servent de générateur de nombre aléatoire
        Random monGenAlea = new Random();

        sPatro = "" +
        (char) (monGenAlea.nextInt(26) + 'A') +
        (char) (monGenAlea.nextInt(26) + 'a') +
        (char) (monGenAlea.nextInt(26) + 'a'); // nom généré aléatoirement

        iId = monGenAlea.nextInt(10000); // Reprend le nombre aléatoire pour donnée un id pour le client 
        dSolde = monGenAlea.nextInt(100000); // génère un solde aléatoire
    }
    
    void afficher(){
        NumberFormat nfDevise = NumberFormat.getCurrencyInstance();

        out.print("Le compte portant le nom ");
        out.print(sPatro); // Reprend des valeurs aléatoires pour afficher le nom client
        out.print(" et dont l'identificateur est");
        out.print(iId); // affiche l'id aléatoire
        out.print(" a un solde de ");
        out.println(nfDevise.format(dSolde)); // affiche le solde aléatoire.
    }
}