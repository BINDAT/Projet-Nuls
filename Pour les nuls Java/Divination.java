import java.util.Random; /*Import de la bibliothèque pour utiliser des fonction liées à l'aléatoire*/

class Divination /*Créer une fonction de classe du nom de Divination avec ses instructions*/{
    public static void main(String[] args) /*créer une fonction static public du nom de main qui prends tout en void*/{
        Random monGenRandom = new Random(); /*Ici création de la variable monGenRandom qui utilise Random*/
        int nAleatoire = monGenRandom.nextInt(10) +1; /*Ici création est attribution de nAléatoire avec en valeur monGenRandom*/

        if (nAleatoire == 7) /*Condition*/{
            System.out.println("Vous êtes l'heureux  gagnant !"); /*affichage*/
        }
        System.out.println(nAleatoire); /*affichage*/
    }    
}
