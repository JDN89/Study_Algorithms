// [6,5,3,1]
// [6,5,3,1]

#include <stdio.h>

void printArray(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    printf("i: %i \n", i);
  }
}

void sort(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; i < n - 1 - i; j++)
      if (arr[j] < arr[j + 1]) {
        printf("arr[j]: %i, is smaller then arr[i]: %i \n", arr[j], arr[i]);
        return;
      }
  }
}

int main() {

  int arr[6] = {4, 6, 2, 1, 5, 3};
  int n = sizeof(arr) / sizeof(arr[0]);
  printArray(arr, n);

  sort(arr, n);
}
