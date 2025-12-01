import java.util.Scanner; // Importation de la classe Scanner pour la saisie au clavier

class AchatProcedural { // Déclaration de la classe principale

    public static void main(String args[]) { // Méthode principale où l'exécution commence
        Scanner clavier = new Scanner(System.in); // Création d'un objet Scanner pour la saisie utilisateur
        double dPrixUnit; // Déclaration de la variable pour le prix unitaire
        int iQuanti; // Déclaration de la variable pour la quantité
        boolean bTaxable; // Déclaration de la variable pour indiquer si l'achat est taxable
        
        double dAPayer; // Déclaration de la variable pour le montant à payer
        int cRep; // o pour TTC, autre pour HT

        System.out.print("Montant (Avec point décimal!) : ");
        dPrixUnit = clavier.nextDouble(); // Lecture du prix unitaire
        System.out.print("Quantité : ");
        iQuanti = clavier.nextInt(); // Lecture de la quantité

        dAPayer = dPrixUnit * iQuanti; // Calcul du montant à payer

        System.out.print("Taxable ? (o pour TTC) ");
        cRep = clavier.findWithinHorizon(".", 0).charAt(0); // Lecture de la réponse pour la taxe
        if (cRep == 'o') bTaxable = true; else bTaxable = false; // Détermination si l'achat est taxable 
            
        if (bTaxable) { // Si l'achat est taxable
            dAPayer = dAPayer * 1.20; // Application de la taxe
        }

        System.out.print("Total à payer : "); // Affichage du montant total à payer
        System.out.println(dAPayer); // Affichage du montant total à payer

        clavier.close(); // Fermeture du scanner pour libérer les ressources
    }
}