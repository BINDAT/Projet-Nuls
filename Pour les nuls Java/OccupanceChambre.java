import java.util.Scanner;
import java.io.File; 
import java.io.FileNotFoundException;
import static java.lang.System.out;

public class OccupanceChambre {

    public static void main(String args[]) throws FileNotFoundException{
        
        Scanner clavier = new Scanner(System.in);
        Scanner dsqLecteur = new Scanner(new File("occupance"));
        int nChoixChambre;

        out.print("Quelle chambre ?");
        nChoixChambre = clavier.nextInt();

        for(int nCham = 0; nCham < nChoixChambre; nCham++){
            
            dsqLecteur.nextInt();
        }

        out.print("La Chambre ");
        out.print(nChoixChambre);
        out.print(" a ");
        out.print(dsqLecteur.nextInt());
        out.println(" personne(s).");

        dsqLecteur.close();
        clavier.close();
    }
}