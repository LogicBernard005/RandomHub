// Q13)  Program to find all the patterns of 0(1+)0 in the given string. Given a string containing 0's 
// and 1's, find the total number of 0(1+)0 patterns in the string and output it.


import java.util.Scanner;

public class CountPatterns {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the string: ");
        String inputString = scanner.nextLine();

        int result = countPatterns(inputString);
        System.out.println("Output: " + result);
    }

    static int countPatterns(String s) {
        int count = 0;
        int i = 0;

        while (i < s.length()) {
            // Check for the pattern 0(1+)0
            if (s.charAt(i) == '0') {
                i++;
                while (i < s.length() && s.charAt(i) == '1') {
                    i++;
                }
                if (i < s.length() && s.charAt(i) == '0') {
                    count++;
                }
            } else {
                i++;
            }
        }

        return count;
    }
}
