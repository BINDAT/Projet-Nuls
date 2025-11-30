class DispoDecroissantes { // Classe principale DispoDecroissantes
    public static void main(String args[]) { // Méthode principale main
        int statutCh[] = {1, 4, 0, 2, 2, 1, 3, 0, 2}; // Déclaration et initialisation du tableau statutCh

        for (int nCham = 9; nCham >= 0; nCham--){ // Boucle for pour parcourir les chambres de 9 à 0
            if (statutCh[nCham] == 0) { // Condition pour vérifier si la chambre est libre
                System.out.print("La chambre "); // Affichage du numéro de chambre
                System.out.print(nCham); // Affichage du numéro de chambre
                System.out.println(" est libre.."); // Affichage de l'état de la chambre
            }
        }
    }    
}
