import java.util.Scanner;
import java.io.File;
import java.io.FileNotFoundException;
import static java.lang.System.out;

class OccupanceHotel {

    public static void main(String args[]) 
                        throws FileNotFoundException{
        
        Scanner dsqLecteur = new Scanner(new File("occupance"));
        out.print("Chambre\tPersonnes");

        for (int nCham = 0; nCham < 10; nCham++) {
            out.print(nCham);
            out.print("\t");
            out.println(dsqLecteur.nextInt());
        }

        dsqLecteur.close();
    }
}