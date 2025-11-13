/*
 * Avant qu'Eclispe puisse compiler ce code,
 * vous devez remplir les blancs.
 */
import java.util.Scanner;
import java.io.File;
import java.io.FileNotFoundException;

class ____ {
    public static void main(String args[]) 
        throws FileNotFoundException {
        
        Scanner dsqLecteur = 
            new Scanner(new File("____"));

            __ = dsqLecteur.nextDouble();
            ____ = dsqLecteur.nextInt();
            ____ = dsqLecteur.nextLine();
            __ = dsqLecteur.findWithinHorizon("", 0)
            .charAt(0);
        
    //etc.
        dsqLecteur.close();
    }
}