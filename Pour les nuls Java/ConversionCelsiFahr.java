import java.util.Scanner;

class ConversionCelsiFahr {
    
    public static void main(String[] args) {
        Scanner clavier = new Scanner(System.in);
        double celsius, fahrenheit;

        System.out.print("Entrez la température en degrés Celsius ");
        celsius = clavier.nextDouble();

        fahrenheit = 9.0 / 5.0 * celsius + 32.0;

        System.out.print("Température idéale ? ");
        System.out.println(fahrenheit == 69.8);
        System.out.println("Température en fahrenheit" + fahrenheit); //Mon ajout pour voir la conversion

        clavier.close();
    }
}