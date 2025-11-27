import static java.lang.System.out;

class ListeCombinaison {
   enum Symbole {
         cerise, citron, orange, banane
    }
    
    public static void main(String args[]) {
        for (Symbole eRoueGauche : Symbole.values()){
            for (Symbole eRoueCentre : Symbole.values()){
                for (Symbole eRoueDroite : Symbole.values()){
                    out.print(eRoueGauche);
                    out.print(" ");
                    out.print(eRoueCentre);
                    out.print(" ");
                    out.println(eRoueDroite);
                }
            }
        }
    }
}