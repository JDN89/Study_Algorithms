// NOTE: Given an array of integers nums and an integer target, return indices
// of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution,
//  and you may not use the same element twice
//      You can return the answer in any order.

// NOTE:
// give array: [3,2,4] and target 6
// [] -> size 6
// LOOP 1
// v:3 i:0 diff 3
// [x,x,x,0]
// LOOP 2:
// v:2 i:1 diff 4
// [x,x,x,0,1]
// LOOP 3 -> index 2
// v:4 i:2 diff 2
// we check if we find a value at index 4 if so we have found the twoSum target
// [x,x,2,0,1]

// we create an empty array were we store the numbers we itterated over
// if the num is bigger then the target we return early, because the size of our
// array is equal to the size of our target if the num i we use the value of the
// number as the index position in the new array where we store the original
// index if we we go over the numbers one by one
//

// create arr of numsSize;
// for i ...
// if nums[i] =
// if [1,1,1,1]

#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize) {

  int temp;
  int *ptr = nums;

  int *result = (int *)malloc(2 * sizeof(int));

  if (target == 0) {
    // int s[numsSize];

      int resultIndex = 0;
    for (int i = 0; i < numsSize; i++) {

      if (nums[i] == 0) {
        printf("i: %d \n", i);
        result[resultIndex] = i;
        printf("resultIndex: %d \n", resultIndex);
        resultIndex++;
      }
    }
  }

  else {

    int s[target];

    for (int i = 0; i < numsSize; i++) {
      if (*ptr > target) {
        return 0;
      }

      // Note when target is 0

      temp = target - *ptr;

      if (s[temp] >= 0 && s[temp] < target) {

        *returnSize = 2;
        result[0] = s[temp];
        result[1] = i;
        return result;

      } else {
        s[*ptr] = i;

        *returnSize = 0;
      }
      ptr++;
    }
  }
  return result;
}

int main() {
  // int nums[] = {3, 2, 4};
  int nums[] = {-3, 4, 3, 0};
  int target = 0;
  int size = sizeof(nums) / sizeof(int);
  int returnSize;
  int *result = twoSum(nums, size, target, &returnSize);
  printf("index 1: %d, index 2:%d /n", result[0], result[1]);
}
