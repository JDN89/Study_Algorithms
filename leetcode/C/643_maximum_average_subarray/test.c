#include "solution.h"
#include <assert.h>

int nums[6] = {1, 12, -5, -6, 50, 3};
int k = 4;
int numsSize = 6;

void test_findMaximumAverage() {
  assert(findMaxAverage(nums, numsSize, k) == 12.75);
}
