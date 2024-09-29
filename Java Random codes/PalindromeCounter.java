// Q19) WAP in java file handling program to count and display the number of palindromes present in a text 
// file "myfile.txt".

// e.g. contents of "myfile.txt":

// "My name is NITIN
// Hello aaa and bbb wordHow are You
// ARORA is my friend"

// Output will be => 4

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class PalindromeCounter{
    public static void main(String []args){
        String filePath = "D:/RandomHub/Java Random codes/myfile.txt";
        try{
            int palindromeCount = countPalindromesInFile(filePath);
            System.out.println("Number of palindromes in file: " + palindromeCount);
        }
        catch(IOException e){
            System.err.println("Error reading file: " + e.getMessage());
        }
    }

    public static int countPalindromesInFile(String fileName) throws IOException{
        int palindromeCount = 0;
        try(BufferedReader reader = new BufferedReader(new FileReader(fileName))){
            String line;
            while((line = reader.readLine())!=null){
                // Use regex to remove non-alphabetic characters and split by whitespace
                String [] words = line.replaceAll("[^a-zA-Z\\s]", "").toLowerCase().split("\\s+");
                for(String word: words){
                    if(!word.isEmpty() && isPalindrome(word)){
                        palindromeCount++;
                    }
                }
            }
        }
        return palindromeCount;
    }

    private static boolean isPalindrome(String word){
        int left = 0;
        int right = word.length()-1;
        while(left<right){
            if(word.charAt(left)!=word.charAt(right)) return false;
            left++;
            right--;
        }
        return true;
    }
}