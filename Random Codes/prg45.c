#include <stdio.h>

void towerOfHanoi(int n, char A, char B, char C) {
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", A, C);
        return;
    }
    towerOfHanoi(n - 1, A, C, B);
    printf("Move disk %d from %c to %c\n", n, A, C);
    towerOfHanoi(n - 1, B, A, C);
}

void totalMovesTowerOfHanoi(int n) {
    int total_moves = (1 << n) - 1; 
    printf("Total number of moves for %d disks in Tower of Hanoi: %d\n", n, total_moves);
}

int main() {
    int n;
    scanf("%d", &n);
    towerOfHanoi(n, 'A', 'B', 'C');
    totalMovesTowerOfHanoi(n);
    return 0;
}
