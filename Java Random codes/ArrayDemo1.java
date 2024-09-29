// Q12) Write a Java program to create a class called ArrayDemo and overload arrayFunc() function. 
// void arrayFunc(int [], int)  To find all pairs of elements in an Array whose sum is equal 
// to a given number : 
// Array numbers= [4, 6, 5, -10, 8, 5, 20], target=10 
// Output : 
// Pairs of elements whose sum is 10 are : 
// 4 + 6 = 10 
// 5 + 5 = 10 -10 + 20 = 10 
// void arrayFunc(int A[], int p, int B[], int q)  Given two sorted arrays A and B of size p 
// and q, Overload method arrayFunc() to merge elements of A with B by maintaining the 
// sorted order i.e. fill A with first p smallest elements and fill B with remaining elements. 
// Example: 
// Input : 
// int[] A = { 1, 5, 6, 7, 8, 10 } 
// int[] B = { 2, 4, 9 } 
// Output: 
// Sorted Arrays: 
// A: [1, 2, 4, 5, 6, 7] 
// B: [8, 9, 10]  


import java.util.Arrays;

public class ArrayDemo1{

    // Method to find pair of 2 numbers whose sum is equal to the target
    void arrayFunc(int [] arr, int target){
        System.out.println("Pair of elements whose sum is" + target + " are:");
        for(int i=0;i<arr.length;i++){
            for(int j=i+1;j<arr.length;j++){
                if(arr[i] + arr[j] == target) {
                    System.out.println(arr[i] + " + " + arr[j] + " = " + target);
                }
            }
        }
    }

    // Method to merge elements of two sorted arrays while maintaining the sorted order
    void arrayFunc(int []A, int p, int [] B, int q){
        int [] mergedArray = new int[p+q];
        int i = 0, j = 0, k=0;
        while(i<p && j<q){
            if(A[i]<B[j]){
                mergedArray[k++] = A[i++];
            }
            else {
                mergedArray[k++] = B[j++];
            }
        }
        while(i<p){
            mergedArray[k++] = A[i++];
        }
        while(j<q){
            mergedArray[k++] = B[j++];
        }
        System.arraycopy(mergedArray, 0, A, 0, p); 
        System.arraycopy(mergedArray, p, B, 0, q); 
        Arrays.sort(A);
        Arrays.sort(B);
        System.out.println("Sorted Arrays:");
        System.out.println("A: " + Arrays.toString(A));
        System.out.println("B: " + Arrays.toString(B));
    }

    public static void main(String []args){
        ArrayDemo1 demo = new ArrayDemo1();

        // Test first method
        int [] numbers = {4, 6, 5, -10, 8, 5, 20};
        int target = 10;
        demo.arrayFunc(numbers, target);

        // Test Second method 
        int [] A = {1, 5, 6, 7, 8, 10};
        int [] B = {2, 4, 9};
        demo.arrayFunc(A, A.length, B, B.length);
    }

}