/*
 * Ce code ne marche PAS
 * (mais vous apprenez de vos erreurs).
 */

import java.io.FileNotFoundException;
import java.io.PrintStream;
import java.util.Scanner;

class ExtraireTousNomsKC {
    
    public static void main(String args[])
                        throws FileNotFoundException{
        
        Scanner dsqLecteur = new Scanner(new File("email.txt"));
        PrintStream dsqScripteur = new PrintStream("usernames.txt");
        char cSymb;

        while (dsqLecteur.hasNext()) {
            cSymb = dsqLecteur.findWithinHorizon(".",0).charAt(0);

            while (cSymb != '@') {
                dsqScripteur.print(cSymb);
                cSymb = dsqLecteur.findWithinHorizon(".",0).charAt(0);
            }

            dsqScripteur.println();
        }

        dsqLecteur.close();
        dsqScripteur.close();
    }
}
