/*
 *Ce code ne marche PAS, mais je ne suis pas découragé. 
 */

import java.util.Scanner; //import la fonction Scanner pou la saisie clavier

class XtrakEssai1 {
    
    public static void main(String args[]) {
        Scanner clavier = new Scanner(System.in); //Création d'une variable qui prendra la saisie du clavier
        char cSymb = ' ';

        while (cSymb != '@') {
            cSymb = clavier.findWithinHorizon(".", 0).charAt(0);

            System.out.print(cSymb);
            //affichage continue de la saisie jusqu'à temps que @ n'est pas saisit
        }

        System.out.print(cSymb);

        clavier.close(); //fermeture du clavier
    }
}
