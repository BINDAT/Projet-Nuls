import java.util.Scanner;

class CalculDeTotal {
    public static void main(String args []) {
        Scanner clavier = new Scanner(System.in);
        double dPrixUni, dQuanti, total;
        
        dPrixUni = clavier.nextDouble();
        dQuanti = clavier.nextInt();

        total = dPrixUni * dQuanti;

        System.out.println(total);

        clavier.close();
    }
}