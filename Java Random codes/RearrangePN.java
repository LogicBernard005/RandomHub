// Q9) The problem is to rearrange positive and negative numbers in an array. 
// Method: This approach moves all the -ve numbers to the beginning and +ve numbers
//         to the end, order of appearance doesn't matter

//     e.g. 1, -1, 2, -2, 3, -3  -->  -1, -2, -3, 1, 3, 2



public class RearrangePN {
    public static void main(String[] args) {
        int[] arr = {4, -3, 2, -7, 5, -1, 6, 9, -8};

        rearrange(arr);

        for (int num : arr) {
            System.out.print(num + " ");
        }
    }

    public static void rearrange(int[] arr) {
        int n = arr.length;
        int positiveIndex = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] < 0) {
                // Swap with the first positive element encountered after it
                while (positiveIndex < n && arr[positiveIndex] < 0) {
                    positiveIndex++;
                }
                if (positiveIndex < n) {
                    int temp = arr[i];
                    arr[i] = arr[positiveIndex];
                    arr[positiveIndex] = temp;
                }
            }
        }
    }
}
