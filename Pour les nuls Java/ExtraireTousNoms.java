/*
 * Ce code est correct !!
 */

import java.util.Scanner;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.PrintStream; 
 
class ExtraireTousNoms {
    
    public static void main(String args[]) 
                        throws FileNotFoundException{
        
        Scanner dsqLecteur = new Scanner(new File("email.txt"));
        PrintStream dsqScripteur = new PrintStream("username.txt");
        char cSymb;

        while (dsqLecteur.hasNext()) {
            cSymb = dsqLecteur.findWithinHorizon(".", 0).charAt(0);

            while (cSymb != '@') {
                dsqScripteur.print(cSymb);
                cSymb = dsqLecteur.findWithinHorizon(".", 0).charAt(0);
            }
                dsqLecteur.nextLine();
                dsqScripteur.println();
            }
        dsqLecteur.close();
        dsqScripteur.close();
    }
}