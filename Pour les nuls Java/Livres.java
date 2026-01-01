// OEN 2102

public class Livres { // Classe principale
    
    public static void main(String[] args) { // Méthode principale
        Litera progPLN = new Litera("Skier pour les nuls", "Gabriel Picarde", 2016); // Instanciation d'un objet Litera
        Litera arduiPLK = new Litera("Arduino facile", "Gaston Demitton", 2018); // Instanciation d'un objet Litera
        Litera libroPLN = new Litera("Liboffice kool", "Emile Dioux", 2021); // Instanciation d'un objet Litera

        System.out.println(libroPLN.getTitre());   //
        System.out.println(arduiPLK.getAuteur());   //
        System.out.println(progPLN); // Affichage de l'objet progPLN via la méthode toString()

        // *** Version moderne avec record !
//  RecBouquin recbo = new RecBouquin("Scribus PAO", "Heinrich Merzig", 2016);
//  System.out.println(recbo.sTitre());             //
//  System.out.println(recbo);             //
    }
}