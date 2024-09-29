#include <stdio.h>

// Permutaion is shuffling of letters in a word: ABC goes as BAC, CBA, etc etc
// While Combination is ways in which a word can be arranged: ABCD into 2 letters combination can be AB, BC, AD, etc etc

// Note that any combinational value nCr can be obtained by adding (n-1)C(r-1) and (n-1)C(r) 
// this is given by Pascals Triangle


int nCr(int n, int r) {
    if (r == 0 || n == r) {
        return 1;
    } else {
        return nCr(n - 1, r - 1) + nCr(n - 1, r);
    }
}

int main() {
    int n, r;

    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);

    if (n < 0 || r < 0 || n < r) {
        printf("Invalid input for nCr calculation.\n");
    } else {
        int result = nCr(n, r);
        printf("C(%d, %d) = %d\n", n, r, result);
    }

    return 0;
}
