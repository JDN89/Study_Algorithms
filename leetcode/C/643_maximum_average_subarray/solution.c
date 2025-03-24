#include "solution.h"
#include <math.h>
#include <stdio.h>

// gebruik sliding window
// size 0 of 1 return onmidelijk

// In plaats van elke keer de volledige subarray te herberekenen
// bereken je het de eerste keer volledig
// daarna slide je de window en voeg je het volgende element toe en subract je
// het eerste element van de vorige window O(N)
double findMaxAverage(int *nums, int numsSize, int k) {
  if (k == 0 || numsSize == 0) {
    return 0;
  }

  int firstElementPreviousWindow = 0;
  double solution = 0;
  double highestMaximumAverage = -10000;

  for (int i = 0; i < k; i++) {
    solution += nums[i];
  }

  highestMaximumAverage = solution;

  for (int i = k; i < numsSize; i++) {
    // eens i == k -> subract eerste element en voeg laatste toe;

    solution += nums[i] - nums[firstElementPreviousWindow];

    firstElementPreviousWindow++;

    if (solution > highestMaximumAverage) {
      printf("solution -- %f \n", solution);
      highestMaximumAverage = solution;
    }
  }

  return round(highestMaximumAverage / k * 100000) / 100000.0;
}
