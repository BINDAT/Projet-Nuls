class CanIKeepKidsQuiet {

    public static void main(String[] args) {
        int nBouleGom;
        int nMome;
        int nBouleMome;
        boolean bDixParMome;

        nBouleGom = 140;
        nMome = 15;
        nBouleMome = nBouleGom / nMome;

        System.out.print("Vrai ou faux (true ou false) ?");
        System.out.println("\nChaque enfant reçois 10 boules de gomme.");
        bDixParMome = nBouleMome >=10;
        System.out.println(bDixParMome);
    }
}
