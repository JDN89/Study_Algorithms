#include "solution.h"

// reutrn earley if numsSize is 0 or 1 or nums == 0
// loop over array and if you encounter a 0 , insert it at end of array
// with each move doe numsSize -1  -number move
#include <stdio.h>
#include <stdlib.h>

void moveZeroes(int *nums, int numsSize) {
  if (numsSize == 0 || numsSize == 1 || nums == NULL) {
    return;
  }

  // when you encounter non zero -> move forward
  // for over arr
  // if (arr[i] != 0) { arr[insertedPos++] = arr[i]}
  // er zal een verschil zijn tss insertedPos en nums[i] want inserted increased
  // enkel voor niet 0 vul wat er overblijft op met 0 values 1,0,4,0,0 [1],...
  // nums[insertedpos ++] -> access at 0 and THEN increase
  // 1,[0] -> nothing
  // 1,0,[4] 0> insertedpos == 1  \\ i == 2
  //
}
