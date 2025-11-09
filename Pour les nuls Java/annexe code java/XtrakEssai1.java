/*
 *Ce code ne marche PAS, mais je ne suis pas découragé. 
 */

import java.util.Scanner; // import la fonction Scanner pour la saisit clavier

class XtrakEssai1 {
    
    public static void main(String args[]) {
        Scanner clavier = new Scanner(System.in); //Création d'une variable qui prendra la saisie du clavier
        char cSymb = ' '; //Initialisation de la variable cSymb qui prendra la saisie clavier

        while (cSymb != '@') { //tant que la saisie clavier n'est pas égale à @
            cSymb = clavier.findWithinHorizon(".", 0).charAt(0); //lecture de la saisie clavier

            System.out.print(cSymb);
            //affichage continue de la saisie jusqu'à temps que @ n'est pas saisi
        }

        System.out.print(cSymb);

        clavier.close(); //fermeture du clavier
    }
}
