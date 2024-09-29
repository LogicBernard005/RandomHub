// Q11) Armstrong Number 

import java.util.*;
class Armstrong{
    public static void main(String args[]){
        Scanner sc = new Scanner (System.in);
        int n;
        System.out.println("Enter Number");
        n = sc.nextInt();
        int f =0, c=0;
        int copy = n; int m = n;
        while(copy>0){
            c++;
            copy = copy/10;
        }
        int sum = 0;
        while(n>0){
            int rem = n%10;
            sum = sum + (int) pow(rem, c);
            n = n/10;
        }
        if(sum==m) System.out.println("Armstrong Number");
        else System.out.println("Not a Armstrong Number");
    }
}