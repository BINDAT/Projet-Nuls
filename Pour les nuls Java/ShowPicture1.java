import javax.swing.ImageIcon; // Importation de la classe ImageIcon pour gérer les images dans une interface graphique
import javax.swing.JFrame; // Importation de la classe JFrame pour créer une fenêtre graphique
import javax.swing.JLabel; // Importation de la classe JLabel pour afficher du texte ou des images dans une fenêtre

class ShowPicture { // Déclaration de la classe principale ShowPicture
    public static void main(String args[]) { // Méthode principale pour exécuter le programme
        new MyFrame(); // Création d'une instance de MyFrame pour afficher la fenêtre avec l'image
    }
}

class MyFrame extends JFrame { // Déclaration de la classe MyFrame qui hérite de JFrame pour créer une fenêtre personnalisée

    private static final long serialVersionUID = 1L; // Déclaration d'un identifiant de version pour la sérialisation

    MyFrame(){
        ImageIcon icon = new ImageIcon("pourlesnuls.jpg"); // Chargement de l'image "pourlesnuls.jpg" dans un objet ImageIcon
        JLabel label = new JLabel(icon); // Création d'un JLabel pour afficher l'image
        add(label); // Ajout du JLabel à la fenêtre
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); // Définition de l'opération de fermeture de la fenêtre
        pack(); // Ajustement de la taille de la fenêtre en fonction du contenu
        setVisible(true); // Rendre la fenêtre visible
    }
}