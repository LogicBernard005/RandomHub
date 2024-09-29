// Q27) Write a method removeEvenLength that takes an  ArrayList of Strings as a parameter and 
// that removes all of the strings of even length from the list. (Use ArrayList)


import java.util.ArrayList;

public class Main3 {
    public static void main(String[] args) {
        ArrayList<String> list = new ArrayList<>();
        list.add("apple");
        list.add("banana");
        list.add("pear");
        list.add("kiwi");
        list.add("rehan");
        list.add("rahul");
        list.add("hello");
        list.add("Triangle");
        list.add("mom");
        

        removeEvenLength(list);

        System.out.println(list); // Output: [banana, pear, orange]
    }

    public static void removeEvenLength(ArrayList<String> list) {
        for (int i = 0; i < list.size(); i++) {
            if (list.get(i).length() % 2 == 0) {
                list.remove(i);
                i--; // Adjust index after removal
            }
        }
    }
}
