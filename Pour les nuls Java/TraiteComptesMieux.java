class TraiteComptesMieux { //Méthode principale
    public static void main(String args[]) {
        
        CompteMieux unCompte; // Variable de type CompteMieux

        for (int i = 0; i < 3; i++) { // Boucle pour traiter 3 comptes
            unCompte = new CompteMieux(); // déclaration de fonction CompteMieux
            unCompte.peupler(); // charge la fonction dans la var unCompte
            unCompte.afficher(); // affiche le contenu de la var unCompte
        }
    }   
}