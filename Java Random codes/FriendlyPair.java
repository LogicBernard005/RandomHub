// Q4) Write a program to find if the given numbers are friendly pair or not. 
    // For example 6 and 28 are friendly pair i.e. (sum of divisors of 6)/6 = (sum of divisors of 28)/28

import java.util.Scanner;
public class FriendlyPair {
    public static void main(String []args){
        Scanner cs = new Scanner (System.in);

        int num1, num2;

        System.out.println("Enter 2 numbers:");
        num1 = cs.nextInt();
        num2 = cs.nextInt();
        int sum1 = 0;
        int sum2 = 0;

        for(int i=1;i<num1;i++){
            if(num1%i==0) sum1 += i;
        }

        for(int i=1;i<num2;i++){
            if(num2%i==0) sum2 += i;
        }

         if((double)sum1/num1 == (double)sum2/num2) System.out.println("Friendly Pair");
        else System.out.println("Not Friendly Pair");

        cs.close();
    }   
}