import static java.lang.System.out; // Importation de la classe System pour simplifier les appels à out

class ListeCombinaison {
   enum Symbole { // Déclaration de l'énumération Symbole
         cerise, citron, orange, banane // Les différents symboles possibles de l’énumération Symbole
    }
    
    public static void main(String args[]) { // Méthode principale de la classe ListeCombinaison
        for (Symbole eRoueGauche : Symbole.values()){ // Boucle pour parcourir toutes les combinaisons possibles
            for (Symbole eRoueCentre : Symbole.values()){ // Boucle imbriquée pour parcourir toutes les combinaisons possibles
                for (Symbole eRoueDroite : Symbole.values()){ // Boucle imbriquée pour parcourir toutes les combinaisons possibles
                    out.print(eRoueGauche); // Affichage du symbole de la roue gauche
                    out.print(" ");
                    out.print(eRoueCentre); // Affichage du symbole de la roue centrale
                    out.print(" ");
                    out.println(eRoueDroite); // Affichage du symbole de la roue droite
                }
            }
        }
    }
}