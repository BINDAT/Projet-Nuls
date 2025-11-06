/*
 *Ce code ne marche PAS, mais je ne suis pas découragé. 
 */

import java.util.Scanner;

class XtrakEssai1 {
    
    public static void main(String args[]) {
        Scanner clavier = new Scanner(System.in);
        char cSymb = ' ';

        while (cSymb != '@') {
            cSymb = clavier.findWithinHorizon(".", 0).charAt(0);

            System.out.print(cSymb);
        }

        System.out.print(cSymb);

        clavier.close();
    }
}
