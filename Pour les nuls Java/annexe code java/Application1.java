package application; // N'oubliez pas de définir le package si nécessaire

import javax.even.ActionEven;
import javax.scene.control.TextField;
import javafx.application.Application; // Importation de la classe Application de JavaFX
import javafx.fxml.FXLLoader; // Importation de la classe FXMLLoader pour charger les fichiers FXML
import javafx.scene.Parent; // Importation de la classe Parent pour représenter la racine de la scène
import javafx.scene.Scene; // Importation de la classe Scene pour créer une scène
import javafx.stage.Stage; // Importation de la classe Stage pour représenter la fenêtre principale

public class Main extends Application {
    @Override
    public void start(Stage primaryStage){
        try{
            // BorderPane root = new BorderPane();
            Parent root = FXMLLoader.load(getClass().getResource("Root.fxml")); // Chargement du fichier FXML

            Scene scene = new Scene(root, 250, 150); // Création de la scène avec la racine chargée
            scene.getStylesheets().add(getClass().getResource("application.css").toExternalForm()); // Ajout de la feuille de style CSS

            primaryStage.setScene(scene); // Définition de la scène pour la fenêtre principale
            primaryStage.show(); // Affichage de la fenêtre principale
        }catch (Exception e){ // Gestion des exceptions lors du chargement
            e.printStackTrace(); // Gestion des exceptions en affichant la trace de la pile
        }
    }
    public static void main(String[] args){
            launch(args); // Lancement de l'application JavaFX
        }
    
    @FXML
    private TextField textField;

    @FXML
    protected void onClick(ActionEvent even){
        textField.setText(textField.getText().toUpperCase());
    }
}