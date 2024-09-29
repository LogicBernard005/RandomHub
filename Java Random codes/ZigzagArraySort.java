// Q6: Arrange the array in zig zag order of decreasing and increasing, like 1st should be smaller 
//     than the 2nd, third than 2nd and 4th and so on.

import java.util.Arrays;

public class ZigzagArraySort{
    public static void main(String [] args){
        int [] array = {4,3,7,8,6,2,1};
        sortInZigzag(array);

        System.out.println(Arrays.toString(array));
    }

    public static void sortInZigzag(int [] array){
        // sort in asc
        Arrays.sort(array);

        // swap adjacent elements to create zigzag pattern 
        for(int i=1;i<array.length-1;i += 2){
            swap(array, i, i+1);
        }
    }
    private static void swap(int [] array, int i, int j){
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp; 
    }
}