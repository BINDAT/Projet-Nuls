/*
 * Ce code fonctionne correctement !
 */

import java.util.Scanner;

class ExtracteurNom {

    public static void main(String args[]) {
        Scanner clavier = new Scanner(System.in);
        char cSymb;

        cSymb = clavier.findWithinHorizon(".",0).charAt(0);

        while (cSymb != '@') {
            System.out.print(cSymb);
            cSymb = clavier.findWithinHorizon(".",0).charAt(0);
        }

        System.out.println();

        clavier.close();
    }
}