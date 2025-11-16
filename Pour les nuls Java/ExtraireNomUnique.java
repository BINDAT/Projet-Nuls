import java.util.Scanner;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.PrintStream;

class ExtraireNomUnique {
    
    public static void main(String args[]) 
                        throws FileNotFoundException{
        
        Scanner dsqLecteur = 
            new Scanner(new File("email.txt"));
        PrintStream dsqScripteur = 
            new PrintStream("usernames.txt");
        char cSymb = 
            dsqLecteur.findWithinHorizon(".",0).charAt(0);
        
        while (cSymb != '@') {
            dsqScripteur.print(cSymb);
            cSymb = dsqLecteur.findWithinHorizon(".",0).charAt(0);
        }

        dsqScripteur.println();

        dsqLecteur.close();
        dsqScripteur.close();
    }
}
