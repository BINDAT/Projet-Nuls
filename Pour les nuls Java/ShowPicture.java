import javax.swing.JFrame; // Importation des classes JFrame, ImageIcon et JLabel
import javax.swing.ImageIcon; // pour créer une fenêtre graphique et afficher une image
import javax.swing.JLabel; // Importation de la classe JLabel pour afficher l'image dans la fenêtre

class ShowPicture {
    
    public static void main(String args[]) {
        JFrame frame = new JFrame(); // Création d'une nouvelle fenêtre JFrame
        ImageIcon icon = new ImageIcon("pourlesnuls.jpg"); // Chargement de l'image "pourlesnuls.jpg" dans un objet ImageIcon
        JLabel label = new JLabel(icon); // Création d'un JLabel pour contenir l'image

        frame.add(label); // Ajout du JLabel à la fenêtre JFrame
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); // Définition de l'opération de fermeture de la fenêtre
        frame.pack(); // Ajustement de la taille de la fenêtre en fonction de la taille de l'image
        frame.setVisible(true); // Rendre la fenêtre visible
    }
}