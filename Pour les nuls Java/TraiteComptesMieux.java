class TraiteComptesMieux { //Méthode principale
    public static void main(String args[]) {
        
        CompteMieux unCompte; // Variable

        for (int i = 0; i < 3; i++) { // Boucle
            unCompte = new CompteMieux(); // déclaration de fonction
            unCompte.peupler(); // charge la fonction dans la var
            unCompte.afficher();
        }
    }   
}