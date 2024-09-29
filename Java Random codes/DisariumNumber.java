// Q7) WAP in java that checks if the sum of squares of digits of a number is equal to the number itself 
// for example 135 i.e. 1^2 + 3^2 + 5^3 = 135

import java.util.Scanner;

public class DisariumNumber {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int number = scanner.nextInt();

        int originalNumber = number;
        int sumOfPoweredDigits = 0;
        int position = numberOfDigits(originalNumber);

        // Calculate the sum of powered digits
        while (number > 0) {
            int digit = number % 10;
            sumOfPoweredDigits += Math.pow(digit, position);
            number /= 10;
            position--;
        }

        // Check if the sum of powered digits equals the original number
        if (sumOfPoweredDigits == originalNumber) {
            System.out.println(originalNumber + " is a Disarium number.");
        } else {
            System.out.println(originalNumber + " is not a Disarium number.");
        }

        scanner.close();
    }

    // Function to count the number of digits in a number
    public static int numberOfDigits(int number) {
        int count = 0;
        while (number != 0) {
            number /= 10;
            count++;
        }
        return count;
    }
}
