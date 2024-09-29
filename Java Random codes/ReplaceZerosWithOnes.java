// Q5 Given an integer, replace all the zeros with ones.
// e.g. 20310 -> 21311

import java.util.Scanner;

public class ReplaceZerosWithOnes{
    public static void main(String [] args){
        Scanner scanner = new Scanner (System.in);
        System.out.print("Enter an Integer:" );
        int inputNumber = scanner.nextInt();
        scanner.close();

        int result = replaceZerosWithOnes(inputNumber);

        System.out.println("Input Number:" + inputNumber);
        System.out.println("Output Number:" + result); 
    }

    public static int replaceZerosWithOnes(int number){
        int result = 0;
        int multiplier = 1;

        while(number>0){
            int digit = number%10;
            result += (digit==0?1:digit)*multiplier;
            multiplier *= 10;
            number /= 10;
        }
        return result;
    }
}