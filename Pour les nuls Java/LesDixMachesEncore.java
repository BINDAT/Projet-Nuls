import static java.lang.System.out; // Pour faciliter l'écriture des instructions d'affichage

class LesDixMachesEncore {
    public static void main(String args[]) { // Point d'entrée du programme Java
        int nTour; // Déclaration de la variable de boucle nTour de type entier

        for (nTour = 0; nTour < 10; nTour++){ // Boucle de 0 à 9 (10 itérations)
            out.print("j'ai mâché ");
            out.print(nTour); // Affichage de la valeur de nTour
            out.println(" fois.");
        }

        out.print(nTour); // Affichage de la valeur finale de nTour
        out.println(" fois ! Hourra !");
        out.println("Je peux avaler !");
    }
}
