#include "solution.h"

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

// loop over array en hou de laatste niet null positie bij
// wanneer huidige waarde niet null is zeg je nums[insertdPost ++] = nums[i]
// insertedPos accessed huidige waarde en doet dan pas + 1
// op die manier doe je insertedpos enkel + 1 wanneer je een niet 0 waarde
// tegenkomt en verhoog je het niet wanneer de waarde 0 is

// move the non zeros forward and keep track of last moved position;
void moveZeroes(int *nums, int numsSize) {
  if (numsSize == 0 || numsSize == 1 || nums == NULL) {
    return;
  }
  int insertedpos = 0;
  for (int i = 0; i <= numsSize; i++) {
    if (nums[i] != 0) {
      nums[insertedpos++] = nums[i];
    }
  }
  if (insertedpos != numsSize) {

    for (int j = ++insertedpos; j <= numsSize; j++) {
      nums[j] = 0;
    }
  }
}
