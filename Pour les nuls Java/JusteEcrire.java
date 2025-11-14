import java.io.File;
import java.io.FileNotFoundException;
import java.io.PrintStream;

class JusteEcrire {
    public static void main(String args[]) 
        throws FileNotFoundException{
        
        PrintStream dsqScripteur =
            new PrintStream("cookedData.txt");
            dsqScripteur.println(99.75);
            dsqScripteur.close();
    }    
}
