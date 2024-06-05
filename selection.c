#include <stdio.h>

void selection_sort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    int indiceMenor = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[indiceMenor]) {
        indiceMenor = j;
      }
    }

    if (indiceMenor != i) {
      int temp = arr[i];
      arr[i] = arr[indiceMenor];
      arr[indiceMenor] = temp;
    }
  }
}

int main() {
  int arr[] = {64, 34, 25, 12, 22, 11, 90};
  int n = sizeof(arr) / sizeof(arr[0]);

  printf("Array original:\n");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }

  selection_sort(arr, n);

  printf("\nArray ordenado:\n");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}

