public class Switchex {
    enum CodeAPE {BOUCHERIE, CHARCUTERIE, CREMERIE, BOULANGERIE, PATISSERIE, PRIMEURS} // Extrait de la nomenclature APE

    public static void main(String args[]) {
        CodeAPE eCAPE; // Extrait de la nomenclature APE

        System.out.println("Switch comme expression !");
        eCAPE = CodeAPE.CREMERIE; // Figé pour exemple //

        int bailCommercial = switch (eCAPE) { // Switch comme expression
            case BOUCHERIE, CHARCUTERIE -> 1; // Exemple de valeur retournée
            case CREMERIE               -> 4; // Exemple de valeur retournée
            case BOULANGERIE, PATISSERIE -> 5; // Exemple de valeur retournée
            case PRIMEURS               -> 6; // Exemple de valeur retournée
        };
        System.out.print("Catégorie de bail à appliquer :");
        System.out.println(bailCommercial); // Affiche 4
        
    }
}