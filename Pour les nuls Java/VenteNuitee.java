import java.util.Scanner;
import static java.lang.System.out;

class VenteNuitee {
    
    public static void main(String args[]) {
        Scanner clavier = new Scanner(System.in);
        int nChambre, nPersonnes;
        int statutCh[];
        statutCh = new int[10];

        for (int nCham = 0; nCham < 10; nCham++){
            statutCh[nCham] = 0;
        }

        do {
            out.print("Numéro de chambre : ");
            nChambre = clavier.nextInt();
            out.print("Combien de Personnes ? ");
            nPersonnes = clavier.nextInt();

            out.println();
            out.print("Autre chambre ? ");
            } while (clavier.findWithinHorizon(".", 0).charAt(0) == 'O');
        
            out.println();
            out.println("Chambres\tPersonnes");
            for (int nCham = 0; nCham < 10; nCham++){
                out.print(nCham);
                out.print("\t\t");
                out.print(statutCh[nCham]);
            }

            clavier.close();
        }
    }