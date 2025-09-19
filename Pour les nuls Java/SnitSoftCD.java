class SnitSoftCD {
    public static void main(String[] args) {
        double dPrixCD; // déclaration de la variable dPrixCD
        double dPort; // déclaration de la variable dPort
        double dTotal; // déclaration de la variable dTotal
    
        dPrixCD = 5.95; // affectation de la valeur 5.95 à la variable dPrixCD
        dPort = 25.00; // affectation de la valeur 25.00 à la variable dPort
        dTotal = dPrixCD + dPort; // addition des deux variables dans dTotal

        System.out.print("Nous allons prélever ");
        System.out.print(dTotal);
        System.out.println(" € sur votre carte bancaire.");
    }
}