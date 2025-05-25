import java.util.Scanner;

class MotRetrograde {
    public static void main(String[] args) {
        Scanner clavier = new Scanner(System.in);
        char c1, c2, c3, c4;

        c1 = clavier.findWithinHorizon(".", 0).charAt(0);
        c2 = clavier.findWithinHorizon(".", 0).charAt(0);
        c3 = clavier.findWithinHorizon(".", 0).charAt(0);
        c4 = clavier.findWithinHorizon(".", 0).charAt(0);

        System.out.print(c4);
        System.out.print(c3);
        System.out.print(c2);
        System.out.print(c1);
        
        System.out.println();

        clavier.close();
    }
}