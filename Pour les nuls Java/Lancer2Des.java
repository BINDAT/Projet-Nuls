import java.util.Random;
import static java.lang.System.out;

class Lancer2Des {
    public static void main (String args[]) {
        Random monGenAlea = new Random();
        int nDe1 = 0, nDe2 = 0;

        while (nDe1 + nDe2 != 7 && nDe1 + nDe2 != 11) {
            nDe1 = monGenAlea.nextInt(6) + 1;
            nDe2 = monGenAlea.nextInt(6) + 1;

            out.print(nDe1);
            out.print(" ");
            out.println(nDe2);
        }

    out.print("Gagné !");
    out.println(nDe1 + nDe2);
    }
}