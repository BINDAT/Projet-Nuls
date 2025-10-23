import java.util.Scanner;

class JoursDansMois {
    public static void main(String args[]) {
        Scanner clavier = new Scanner(System.in);
        int nMois, nNbrJours = 0;
        boolean bSextile;

        System.out.print("Quel mois ?");
        nMois = clavier.nextInt();

        switch (nMois) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                nNbrJours = 31;
                break;
            
            case 4:
            case 6:
            case 9:
            case 11:
                nNbrJours = 30;
                break;
            
            case 2:
                System.out.print("Année bissextile (true/false) ?");
                bSextile = clavier.nextBoolean();
                if (bSextile) {
                    nNbrJours = 29;
                } else {
                    nNbrJours = 28;
                }
        }
        System.out.print(nNbrJours);
        System.out.println(" jours");

        clavier.close();
    }
}
