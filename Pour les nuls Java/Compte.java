import java.text.NumberFormat; // Importe la bibliothèque NumberFormat pour gérer les format devise
import static java.lang.System.out;


class Compte {
    String sPatro; // Une var pour le patronyme de l'utilisateur
    int iID; // var pour l'identificateur
    double dSolde; // var pour le solde

    void afficher(){
        NumberFormat nfDevise =
            NumberFormat.getCompactNumberInstance(); // gère le format de devise

        out.print("Le compte portant le nom ");
        out.print(sPatro); // affiche le patronyme
        out.print(" et dont l'identificateur est ");
        out.print(iID); // affiche l'identificateur
        out.print(" a un solde de ");
        out.println(nfDevise.format(dSolde)); // affiche le solde de compte avec le gestionnaire de devise
    }
}