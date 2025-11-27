import static java.lang.System.out; // Importation de la classe System pour l'affichage

class ListeSymboles { // Début de la classe ListeSymboles
    
    enum Symbole { // Début de l'énumération Symbole
        cerise, citron, orange, banane // Déclaration de l'énumération Symbole
    }

    public static void main(String args[]) { // Point d'entrée du programme
        for (Symbole eRoueGauche : Symbole.values()) {
            out.println(eRoueGauche); // Affiche la valeur de l'élément
        }
    }
}