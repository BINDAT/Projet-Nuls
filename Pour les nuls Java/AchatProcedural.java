import java.util.Scanner;

class AchatProcedural {

    public static void main(String args[]) {
        Scanner clavier = new Scanner(System.in);
        double dPrixUnit;
        int iQuanti;
        boolean bTaxable;
        
        double dAPayer;
        int cRep; // o pour TTC, autre pour HT

        System.out.print("Montant (Avec point décimal!) : ");
        dPrixUnit = clavier.nextDouble();
        System.out.print("Quantité : ");
        iQuanti = clavier.nextInt();

        dAPayer = dPrixUnit * iQuanti;

        System.out.print("Taxable ? (o pour TTC) ");
        cRep = clavier.findWithinHorizon(".", 0).charAt(0);
        if (cRep == 'o') bTaxable = true; else bTaxable = false; 
            
        if (bTaxable) {
            dAPayer = dAPayer * 1.20;
        }

        System.out.print("Total à payer : ");
        System.out.println(dAPayer);

        clavier.close();
    }
}