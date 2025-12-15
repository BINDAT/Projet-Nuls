class TraiteComptesMieux {
    public static void main(String args[]) {
        
        CompteMieux unCompte;

        for (int i = 0; i < 3; i++) {
            unCompte = new CompteMieux();
            unCompte.peupler();
            unCompte.afficher();
        }
    }   
}