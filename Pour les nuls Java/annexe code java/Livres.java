// OEN 2102

public class Livres {
    
    public static void main(String[] args) {
        Litera progPLN = new Litera("Skier pour les nuls", "Gabriel Picarde", 2016);
        Litera arduiPLK = new Litera("Arduino facile", "Gaston Demitton", 2018);
        Litera libroPLN = new Litera("Liboffice kool", "Emile Dioux", 2021);

        System.out.println(libroPLN.getTitre());   //
        System.out.println(arduiPLK.getAuteur());   //
        System.out.println(progPLN);
    }
}