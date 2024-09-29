// Q28)  Write a method swapPairs that switches the order of values in an ArrayList of Strings in a 
// pairwise fashion. Your method should switch the order of the first two values, then switch 
// the order of the next two, switch the order of the next two, and so on. 
// For example, if the list initially stores these values: {"four", "score", "and", "seven", "years", 
// "ago"} your method should switch the first pair, "four", "score", the second pair, "and", 
// "seven", and the third pair, "years", "ago", to yield this list: {"score", "four", "seven", "and", 
// "ago", "years"} 
// If there are an odd number of values in the list, the final element is not moved. 
// For example, if the original list had been: {"to", "be", "or", "not", "to", "be", "hamlet"} It 
// would again switch pairs of values, but the final value, "hamlet" would not be moved, 
// yielding this list: {"be", "to", "not", "or", "be", "to", "hamlet"}



import java.util.ArrayList;

public class Main4 {
    public static void main(String[] args) {
        ArrayList<String> strings1 = new ArrayList<>();
        strings1.add("four");
        strings1.add("score");
        strings1.add("and");
        strings1.add("seven");
        strings1.add("years");
        strings1.add("ago");

        ArrayList<String> strings2 = new ArrayList<>();
        strings2.add("to");
        strings2.add("be");
        strings2.add("or");
        strings2.add("not");
        strings2.add("to");
        strings2.add("be");
        strings2.add("hamlet");

        System.out.println("Before swapping pairs:");
        System.out.println(strings1);
        System.out.println(strings2);

        swapPairs(strings1);
        swapPairs(strings2);

        System.out.println("After swapping pairs:");
        System.out.println(strings1);
        System.out.println(strings2);
    }

    public static void swapPairs(ArrayList<String> list) {
        for (int i = 0; i < list.size() - 1; i += 2) {
            String temp = list.get(i);
            list.set(i, list.get(i + 1));
            list.set(i + 1, temp);
        }
    }
}
