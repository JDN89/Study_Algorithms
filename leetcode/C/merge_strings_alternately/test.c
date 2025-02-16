#include "solution.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>

void test_mergeAlternately() {
  printf("start running test -- mergeAlternately \n");
  char *result = mergeAlternately("ace", "bdf");
  printf("result -- %s \n", result);
  assert(strcmp(result, "abcdef") == 0);
  result = NULL;

  result = mergeAlternately("ab", "pqrs");
  printf("result -- %s \n", result);
  assert(strcmp(result, "apbqrs") == 0);
  printf("All test cases passed!\n");
}
