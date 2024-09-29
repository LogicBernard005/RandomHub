#include <stdio.h>

void quicksort(int A[], int LB, int UB) {
  int i = LB, j = UB, key = A[LB], t = 0;
  if (LB >= UB) {
    return;
  }
  while (i < j) {
    while (key > A[i] && i < j) {
      i++;
    }
    while (key < A[j]) {
      j--;
    }
    if (i < j) {
      t = A[i];
      A[i] = A[j];
      A[j] = t;
    }
  }
  quicksort(A, LB, j - 1);
  quicksort(A, j + 1, UB);
}

int main(void) {
  int arr[] = {22, 2, 32, 4, 5, 10};
  int n = 6;
  quicksort(arr, 0, n - 1);
  for (int i = 0; i < n; i++) {
    printf("%d->", arr[i]);
  }
  return 0;
}
