import java.util.Scanner;

public class GetInput {
    
    public static void main(String[] args) {
        Scanner Keyboard = new Scanner(System.in);

        System.out.println(Keyboard.next());
        System.out.println(Keyboard.next());
        System.out.println(Keyboard.nextLine());

        Keyboard.close();
    }
}
