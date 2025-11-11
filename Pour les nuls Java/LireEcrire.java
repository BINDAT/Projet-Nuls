import java.util.Scanner;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.PrintStream;

public class LireEcrire {
    
    public static void main(String args []) 
                        throws FileNotFoundException{
        Scanner dsc = new Scanner(new File("rawData.txt"));
        PrintStream dsqScripteur = 
            new PrintStream("cookedData.txt");
        double dPrixUni, dQuanti, total;

        dPrixUni = dsc.nextDouble();
        dQuanti = dsc.nextInt();

        total = dPrixUni * dQuanti;

        dsqScripteur.println(total);

        dsc.close();
        dsqScripteur.close();
    }
}
