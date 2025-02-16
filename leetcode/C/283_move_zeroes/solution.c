#include "solution.h"

// reutrn earley if numsSize is 0 or 1 or nums == 0
// loop over array and if you encounter a 0 , insert it at end of array
// with each move doe numsSize -1  -number move
#include <stdio.h>
#include <stdlib.h>

// we start with 1 because I want to insert at the end of the array bu doing
// numsSize - moveNumber;
// TODO: store moveNumber so that we only have to move the elements between
// current index up until the end - moveNumber, because past that we
// allready placed zeros

// NOTE: ik had hier eerst een if statement, maar het probleem was dat ik na
// de eerste 0 overging naar de volgende index in de for loop. stel ik had
// 0,0,1 eerste loop -- HIT,
// 0,1,0 MAAR nu is index 1! dus if statement werkt niet indien we meerdere
// keren 0 hebben op de eerste positie -> WHILE
void moveZeroes(int *nums, int numsSize) {
  if (numsSize == 0 || numsSize == 1 || nums == NULL) {
    return;
  }

  int moveNumber = 0;
  for (int i = 0; i < numsSize - 1 - moveNumber; i++) {

    int count = 0;
    while (nums[i] == 0 && count < numsSize) {
      int indx = i;
      while (indx < (numsSize - 1 - moveNumber)) {
        nums[indx] = nums[indx + 1];
        indx++;
      }
      nums[numsSize - 1 - moveNumber] = 0;
      printf("%i \n", moveNumber);
      moveNumber++;

      count++;
    }
  }
}
