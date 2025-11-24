/*
* ATTENTION: L'auteur de ce livre, la collection Pour les nuls,
* toute personne même n'ayant qu'un lointain rapport avec ce livre,
* ni qui que ce soit d'autre ne peut être tenu pour responsable
* de tout dommage de toute sorte provoqué par ce code,
* pas plus que toute modification ou utilisation dérivée de ce code,
* y compris et notamment ce qui pourrait être fait par le lecteur.
*
* Signez ici : ____________________
*/

import java.io.File;
import java.util.Scanner;

class DangerPourVosFichier {
    public static void main(String args[]) {
        Scanner clavier = new Scanner(System.in);
        char cDecision;

        do {

            System.out.print("Répondez par O ou N...");
            System.out.print(" Supprimer importantData.txt ? ");
            cDecision = clavier.findWithinHorizon(".", 0).charAt(0);
        } while (cDecision !='O' && cDecision != 'N');

        if (cDecision == 'O') {
            new File("importantData.txt").delete();
            System.out.println("Supprimé pour toujours !");
        } else {
            System.out.print("Il n'y a pas de mal à demander !");
        }

        clavier.close();
    }
}