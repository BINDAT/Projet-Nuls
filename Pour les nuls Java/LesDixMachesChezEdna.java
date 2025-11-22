import static java.lang.System.out; // Pour pouvoir utiliser out directement

class LesDixMachesChezEdna { // Déclaration de la classe
    
    public static void main(String args[]) { // Méthode principale
         
        for (int nTour = 0; nTour < 10; nTour++){ // Boucle de 0 à 9
            out.print("J'ai mâché ");
            out.print(nTour); // Affiche le nombre de tours
            out.println(" fois.");
        }
        out.println("10 fois ! Hourra !"); // Après la boucle
        out.println("Je peut avaler !"); // Message final
    }
}