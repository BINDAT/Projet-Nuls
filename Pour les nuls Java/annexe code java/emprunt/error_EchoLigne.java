import java.util.Scanner;

class EchoLigne {

    public static void main(String args[]){

    } /*Erreur ici des accolades en trop*/ {
        Scanner clavier = new Scanner(System.in);
        System.out.println(clavier.nextLine());
        clavier.close();
    }
}