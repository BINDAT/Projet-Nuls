public class Switchex {
    enum CodeAPE {BOUCHERIE, CHARCUTERIE, CREMERIE, BOULANGERIE, PATISSERIE, PRIMEURS}

    public static void main(String args[]) {
        CodeAPE eCAPE;

        System.out.println("Switch comme expression !");
        eCAPE = CodeAPE.CREMERIE; // Figé pour exemple

        int bailCommercial = switch (eCAPE) {
            case BOUCHERIE, CHARCUTERIE -> 1;
            case CREMERIE               -> 4;
            case BOULANGERIE, PATISSERIE -> 5;
            case PRIMEURS               -> 6;
        };
        System.out.print("Catégorie de bail à appliquer :");
        System.out.println(bailCommercial);
        
    }
}
