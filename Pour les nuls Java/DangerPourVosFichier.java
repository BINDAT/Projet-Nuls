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

import java.io.File; // Pour la gestion des fichiers
import java.util.Scanner; // Pour la lecture au clavier

class DangerPourVosFichier {
    public static void main(String args[]) {
        Scanner clavier = new Scanner(System.in); // Pour la lecture au clavier
        char cDecision; // Pour stocker la décision de l'utilisateur

        do {

            System.out.print("Répondez par O ou N..."); // Demande à l'utilisateur de répondre par O ou N
            System.out.print(" Supprimer importantData.txt ? "); // Question posée à l'utilisateur
            cDecision = clavier.findWithinHorizon(".", 0).charAt(0); // Lecture de la réponse de l'utilisateur
        } while (cDecision !='O' && cDecision != 'N'); // Répéter tant que la réponse n'est pas O ou N

        if (cDecision == 'O') {
            new File("importantData.txt").delete(); // Suppression du fichier importantData.txt
            System.out.println("Supprimé pour toujours !"); // Confirmation de la suppression
        } else {
            System.out.print("Il n'y a pas de mal à demander !"); // Message si l'utilisateur a répondu N
        }

        clavier.close(); // Fermeture du scanner pour libérer les ressources
    }
}