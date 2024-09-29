// Q18) Create a class MyCalculator which consists of a single method  power(int, int). 
// This method takes two integers, n and p, as parameters and finds np . 
// If either n or p  is negative, then the method must throw an exception which says "n and 
// p should be non-negative".  
// Input Format  
// Each line of the input contains two integers, n and p .  
// Output Format  
// Each line of the output contains the result ,if neither of n and  p is negative.  
// Otherwise the output contains "n and p should be non-negative".

import java.util.Scanner;

class MyCalculator{
    public long power(int n, int p) throws Exception{
        if(n<0 || p<0){
            throw new Exception("n and p should be non-negative");
        }
        return (long) Math.pow(n, p);
    }

    public static void main(String[] args){
        MyCalculator myCalculator = new MyCalculator();
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the number of test cases:");
        int testCases = sc.nextInt();
        System.out.println("Enter pairs (n, p) for each test case: ");

        for(int i=0;i<testCases; i++){
            int n = sc.nextInt();
            int p = sc.nextInt(); 
            try{
                long result = myCalculator.power(n, p);
                System.out.println(n + "^" + p + " = " + result);
            }
            catch(Exception e){
                System.out.println(e.getMessage());
            }
        }
        sc.close();
    }
}