// NOTE: Given an array of integers nums and an integer target, return indices
// of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution,
//  and you may not use the same element twice
//      You can return the answer in any order.

// create arr of numsSize;
// for i ...
// if nums[i] =
// if [1,1,1,1]

#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize) {

  int i, temp;
  int *ptr = nums;

  int *result = (int *)malloc(2 * sizeof(int));

  printf("%d = numsize \n", numsSize);

  int s[target];

  for (int i = 0; i < numsSize; i++) {
    temp = target - *ptr;

    if (s[temp] == 1) {

      *returnSize = 2;
      // -1 because 0 based index
      // BUG: we don't return the correct indexestemp
      printf("temp %d \n", temp);
      printf("index of temp %d \n", nums[temp]);
      result[0] = nums[s[temp]];
      result[1] = i;
      return result;

    } else {
      printf("%d - i \n", i);

      // NOTE: store index of value in nums in the s(earch) array retrieve index
      // BUG: this logic is not working for now
      s[*ptr] = i;

      *returnSize = 0;
    }
    ptr++;
  }
  return result;
}

int main() {
  // int nums[] = {2, 7, 11, 15};
  // int target = 9;
  int nums[] = {3, 2, 4};

  int target = 6;
  int size = sizeof(nums) / sizeof(int);
  int returnSize;
  int *result = twoSum(nums, size, target, &returnSize);
  printf("index 1: %d, index 2:%d /n", result[0], result[1]);
}
