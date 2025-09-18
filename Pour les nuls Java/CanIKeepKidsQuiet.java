class CanIKeepKidsQuiet {

    public static void main(String[] args) {
        int nBouleGom; // nombre de boules de gomme
        int nMome; // nombre d'enfants
        int nBouleMome; // nombre de boules par enfant
        boolean bDixParMome; // vrai si chaque enfant reçoit au moins 10 boules

        nBouleGom = 140; // initialisation
        nMome = 15; // initialisation
        nBouleMome = nBouleGom / nMome; // division entière

        System.out.print("Vrai ou faux (true ou false) ?");
        System.out.println("\nChaque enfant reçoit 10 boules de gomme.");
        bDixParMome = nBouleMome >=10; // comparaison
        System.out.println(bDixParMome); // affichage du résultat
    }
}
