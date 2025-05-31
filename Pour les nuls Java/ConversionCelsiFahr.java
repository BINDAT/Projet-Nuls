import java.util.Scanner; /*Bibliothèque qui sert à prendre les entrées de saisit*/

class ConversionCelsiFahr /*class de nom ConversionCelsiFahr */ {
    
    public static void main(String[] args) /*focntion public statique type void du nom main*/ {
        Scanner clavier = new Scanner(System.in); /*Ici créer une variable clavier qui sert de stock d'entrée de saisit */
        double celsius, fahrenheit; /*Créer des variable double*/

        System.out.print("Entrez la température en degrés Celsius "); /*Affichage*/
        celsius = clavier.nextDouble(); /*La var celsius reprend en mémoire la saisit du clavier en type double*/

        fahrenheit = 9.0 / 5.0 * celsius + 32.0; /*Formule de calcul*/

        System.out.print("Température idéale ? ");
        System.out.println(fahrenheit == 69.8); /*Si var correspond à val affiche vrai sinon faux */
        System.out.println("Température en fahrenheit" + fahrenheit); //Mon ajout pour voir la conversion

        clavier.close();
    }
}