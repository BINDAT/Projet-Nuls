import java.util.Random;
import java.text.NumberFormat;
import static java.lang.System.out;


class CompteMieux {
    String sPatro;
    int iId;
    double dSolde;

    void peupler(){
        Random monGenAlea = new Random();

        sPatro = "" +
        (char) (monGenAlea.nextInt(26) + 'A') +
        (char) (monGenAlea.nextInt(26) + 'a') +
        (char) (monGenAlea.nextInt(26) + 'a');
    }
    
    void afficher(){

    }
}