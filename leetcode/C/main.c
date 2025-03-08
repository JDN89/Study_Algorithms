#include "283_move_zeroes/solution.c"
#include "283_move_zeroes/test.c"
#include "643_maximum_average_subarray/solution.c"
#include "643_maximum_average_subarray/test.c"
#include "merge_strings_alternately/solution.c"
#include "merge_strings_alternately/test.c"

void run_tests() {
  test_mergeAlternately();
  test_moveZeroes();
  test_findMaximumAverage();
}

int main() { run_tests(); }
