// Q14)  Write a java program to delete vowels from given string using StringBuffer class.

import java.util.Scanner;

public class DeleteVowels {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String inputString = scanner.nextLine();

        String result = deleteVowels(inputString);
        System.out.println("String after deleting vowels: " + result);
    }

    static String deleteVowels(String input) {
        // Create a StringBuffer object to manipulate the string
        StringBuffer result = new StringBuffer();

        // Iterate through each character in the input string
        for (int i = 0; i < input.length(); i++) {
            char ch = input.charAt(i);

            // Check if the character is a vowel (case-insensitive)
            if (!isVowel(ch)) {
                // Append non-vowel characters to the result StringBuffer
                result.append(ch);
            }
        }

        // Convert the StringBuffer to a String and return
        return result.toString();
    }

    static boolean isVowel(char ch) {
        // Check if the character is a vowel (case-insensitive)
        return "aeiouAEIOU".indexOf(ch) != -1;
    }
}
