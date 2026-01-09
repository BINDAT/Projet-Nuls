import java.awt.Font; // Importation de la classe Font pour gérer les polices de caractères
import java.awt.GridLayout; // Importation de la classe GridLayout pour organiser les composants en grille

import javax.swing.JFrame; // Importation de la classe JFrame pour créer une fenêtre
import javax.swing.JLabel; // Importation de la classe JLabel pour afficher du texte dans la fenêtre

public class Main {
    
    public static void main(String[] args) {
        JFrame frame = new JFrame(); // Création d'une nouvelle fenêtre
        frame.setLayout(new GridLayout(4,2)); // Définition du gestionnaire de mise en page en grille (4 lignes, 2 colonnes)

        JLabel labels[] =
        { new JLabel("Nom"),    new JLabel("Téléphone"),
          new JLabel("Alice"),  new JLabel("555-1234"),
          new JLabel("Paul"),   new JLabel("555-4321"),
          new JLabel("Carole"), new JLabel("555-3000") }; // Création d'un tableau de labels pour afficher les noms et numéros de téléphone
        
        frame.add(labels[0]); // Ajout du premier label ("Nom") à la fenêtre
        frame.add(labels[1]); // Ajout du deuxième label ("Téléphone") à la fenêtre

        JLabel boldLabel = new JLabel("Nom"); // Création d'un label pour "Nom" en gras
        Font boldFont = boldLabel.getFont(); // Récupération de la police actuelle du label
        Font plainFont = new Font(boldFont.getName(), Font.PLAIN, boldFont.getSize()); // Création d'une police en style normal (PLAIN)

        for (int i = 2; i < 8; i++) {
            labels[i].setFont(plainFont); // Application de la police normale aux labels des noms et numéros de téléphone
            frame.add(labels[i]); // Ajout des labels restants à la fenêtre
        }

        frame.pack(); // Ajustement de la taille de la fenêtre en fonction des composants ajoutés
        frame.setVisible(true); // Rendre la fenêtre visible
    }
}