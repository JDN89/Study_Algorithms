#include "solution.h"

#include <stdio.h>
#include <stdlib.h>

void moveZeroes(int *nums, int numsSize) {
  if (numsSize == 0 || numsSize == 1 || nums == NULL) {
    return;
  }

  // We houden de index bij van de laatste niet 0 waarde.
  // zolang we 0 blijven tegenkomen increasen we dit niet.
  // als i niet gelijk is aan lastNonZeroIndex zetten we nums[i] op 0
  int lastNonZeroIndex = 0;

  for (int i = 0; i < numsSize; i++) {
    if (nums[i] != 0) {
      nums[lastNonZeroIndex] = nums[i];
      // als i niet gelijk is aan lastNonZeroIndex, zetten we i op 0
      if (i != lastNonZeroIndex) {
        nums[i] = 0;
      }
      lastNonZeroIndex++;
    }
  }
}
