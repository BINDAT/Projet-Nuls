import java.util.Scanner;
import java.io.File;
import java.io.FileNotFoundException;

class DispoDecroissantes {
    
    public static void main(String args[]) throws FileNotFoundException {
        
        Scanner dsqLecteur = new Scanner(new File("occupance"));
        int statutCh[];
        statutCh = new int[10];

        for (int nCham = 0; nCham < 10; nCham++){
            statutCh[nCham] = dsqLecteur.nextInt();
        }

        for (int nCham = 9; nCham >= 0; nCham--){
            if (statutCh[nCham] == 0) {
                System.out.print("La Chambre ");
                System.out.print(nCham);
                System.out.println(" est vacante.");
            }
        }

        dsqLecteur.close();
    }
}