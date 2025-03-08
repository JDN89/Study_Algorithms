#include "solution.h"

// gebruik sliding window
// size 0 of 1 return onmidelijk

// In plaats van elke keer de volledige subarray te herberekenen
// bereken je het de eerste keer volledig
// daarna slide je de window en voeg je het volgende element toe en subract je
// het eerste element van de vorige window O(N)
double findMaxAverage(int *nums, int numsSize, int k) {
  if (k == 0) {

    return 0;
  }
  if (k == 1) {
    // fetch biggest element out of the array
    return 0;
  }

  int firstElementPreviousWindow = 0;
  double solution = 0;
  double highestMaximumAverage = 0;
  for (int i = 0; i < numsSize; i++) {
    // eens i == k -> subract eerste element en voeg laatste toe;

    if (i >= k) {
      solution -= nums[firstElementPreviousWindow];
      solution += nums[i];

      firstElementPreviousWindow++;
    } else {
      solution += nums[i];
    }
    if (solution > highestMaximumAverage) {
      highestMaximumAverage = solution;
    }
  }

  return highestMaximumAverage;
}
