import static java.lang.System.out;

class ListeSymboles {
    
    enum Symbole {
        cerise, citron, orange, banane
    }

    public static void main(String args[]) {
        for (Symbole eRoueGauche : Symbole.values()) {
            out.println(eRoueGauche);
        }
    }
}