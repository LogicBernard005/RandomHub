// Q16) Define a class WordExample having the following description: Data members/instance 
// variables: private String strdata :  to store a sentence. WordExample(String) :  Accept a 
// sentence which may be terminated by either’.’, ‘? ’or ’!’ only. The words may be 
// separated by more than one blank space and are in UPPER CASE. 
// Member Methods: 
// void countWord(): Find the number of words beginning and ending with a vowel. 
// void placeWord(): Place the words which begin and end with a vowel at the beginning, 
// followed by the remaining words as they occur in the sentence.


public class WordExample {
    private String strdata;

    // Parameterized constructor
    public WordExample(String sentence) {
        // Remove leading and trailing whitespaces
        this.strdata = sentence.trim();
    }

    // Method to check if a character is a vowel
    private boolean isVowel(char ch) {
        return "AEIOUaeiou".indexOf(ch) != -1;
    }

    // Method to count words beginning and ending with a vowel
    public void countWord() {
        String[] words = strdata.split("\\s+");
        int count = 0;

        for (String word : words) {
            if (word.length() > 0 && isVowel(word.charAt(0)) && isVowel(word.charAt(word.length() - 1))) {
                count++;
            }
        }

        System.out.println("Number of words beginning and ending with a vowel: " + count);
    }

    // Method to place words beginning and ending with a vowel at the beginning
    public void placeWord() {
        String[] words = strdata.split("\\s+");
        StringBuilder result = new StringBuilder();

        // Append words beginning and ending with a vowel
        for (String word : words) {
            if (word.length() > 0 && isVowel(word.charAt(0)) && isVowel(word.charAt(word.length() - 1))) {
                result.append(word).append(" ");
            }
        }

        // Append remaining words
        for (String word : words) {
            if (!(word.length() > 0 && isVowel(word.charAt(0)) && isVowel(word.charAt(word.length() - 1)))) {
                result.append(word).append(" ");
            }
        }

        System.out.println("Modified sentence: " + result.toString().trim());
    }

    public static void main(String[] args) {
        //WordExample wordExample = new WordExample("HELLO World!This is an Example.");
       WordExample wordExample = new WordExample("HELLO World! arcade are areca arena aria armadillo amigo is an Example.");
        wordExample.countWord();
        wordExample.placeWord();
    }
}
