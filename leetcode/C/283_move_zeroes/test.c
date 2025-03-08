#include "solution.h"
#include <assert.h>
#include <stdio.h>

void test_moveZeroes() {
  printf("START -- test_moveZeroes \n");

  /*int nums[5] = {0, 1, 0, 3, 12};*/
  /*int expected[5] = {1, 3, 12, 0, 0};*/
  /*int size = 5;*/
  /*moveZeroes(nums, size);*/
  /**/
  /*for (int i = 0; i < size; i++) {*/
  /*  assert(nums[i] == expected[i]);*/
  /*}*/

  int nums_2[2] = {0, 1};
  int expected_2[3] = {1, 0};
  int size_2 = 2;
  moveZeroes(nums_2, size_2);

  for (int i = 0; i < size_2; i++) {
    if (nums_2[i] != expected_2[i]) {
      printf("i == %d is niet gelijk \n", nums_2[i]);
    }
    assert(nums_2[i] == expected_2[i]);
  }

  printf("test_moveZeroes -- PASSED \n");
}
