// [6,5,3,1]
// [6,5,3,1]

#include <stdio.h>

void printArray(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    printf("i: %i && value: %i \n", i, arr[i]);
  }
}

void swap(int *j, int *jplus) {
  int temp = *j;
  *j = *jplus;
  *jplus = temp;
  return;
}

void sort(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - 1 - i; j++)
      if (arr[j] > arr[j + 1]) {
        // NOTE: Passing by Value: When you pass arr[j], you are passing a copy
        // of the value of arr[j]. Any changes made to this value inside the
        // swap function will not affect the original array.
        // Passing by Reference
        //     : When you pass &arr[j],
        //       you are passing the address of arr[j].The swap function
        //       receives a
        //           pointer to the original element,
        //       allowing it to modify the element directly.
        swap(&arr[j], &arr[j + 1]);
      }
  }
}

int main() {

  int arr[6] = {4, 6, 2, 1, 5, 3};
  int n = sizeof(arr) / sizeof(arr[0]);
  printArray(arr, n);
  sort(arr, n);
  printf("sorted\n");
  printArray(arr, n);
}
