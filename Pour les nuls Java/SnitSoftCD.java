class SnitSoftCD {
    public static void main(String[] args) {
        double dPrixCD;
        double dPort;
        double dTotal;
    
        dPrixCD = 5.95;
        dPort = 25.00;
        dTotal = dPrixCD + dPort;

        System.out.print("Nous allons prélever ");
        System.out.print(dTotal);
        System.out.println(" € sur votre carte bancaire.");
    }
}