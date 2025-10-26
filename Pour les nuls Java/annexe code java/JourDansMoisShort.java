import java.util.Scanner; // Importation de la classe Scanner pour la saisie clavier

class JoursDansMois {
    public static void main(String args[]) {
        Scanner clavier = new Scanner(System.in);
        int nMois, nNbrJours = 0; // Initialisation du nombre de jours à 0
        boolean bSextile; // Variable pour indiquer si l'année est bissextile

        System.out.print("Quel mois ? ");
        nMois = clavier.nextInt(); // Lecture du numéro du mois saisi par l'utilisateur

        switch (nMois) {
            case 1, 3, 5, 7, 8, 10, 12: // Mois avec 31 jours
                nNbrJours = 31; // Attribution du nombre de jours
                break;
            
            case 4, 6, 9, 11: // Mois avec 30 jours
                nNbrJours = 30; // Attribution du nombre de jours
                break;
            
            case 2: // Février, nombre de jours dépendant de l'année bissextile
                System.out.print("Année bissextile (true/false) ?");
                bSextile = clavier.nextBoolean(); // Lecture de la valeur bissextile
                if (bSextile) {
                    nNbrJours = 29; // Année bissextile
                } else {
                    nNbrJours = 28; // Année non bissextile
                }
        }
        System.out.print(nNbrJours); // Affichage du nombre de jours
        System.out.println(" jours");

        clavier.close(); // Fermeture du scanner pour éviter les fuites de ressources
    }
}
