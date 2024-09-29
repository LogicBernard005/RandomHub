import java.util.Scanner;

public class Practice {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String input = scanner.nextLine(); // Read a line of text from the user

        System.out.println("You entered: " + input);

        scanner.close(); // Close the scanner to prevent resource leak
    }
}
