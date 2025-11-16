import java.io.File;
import java.io.FileNotFoundException;
import java.io.PrintStream;

class EcrireOK {
    public static void main(String args[]) 
        throws FileNotFoundException {
        
        PrintStream dsqScripteur = 
            new PrintStream(new File("approuve.txt"));

        dsqScripteur.print('O');
        dsqScripteur.println('K');

        dsqScripteur.close();
    }
}
