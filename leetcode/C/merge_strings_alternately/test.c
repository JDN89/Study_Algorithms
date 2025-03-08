#include "solution.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>

void test_mergeAlternately() {
  printf("start  -- test_mergeAlternately \n");
  char *result = mergeAlternately("ace", "bdf");
  assert(strcmp(result, "abcdef") == 0);
  result = NULL;

  result = mergeAlternately("ab", "pqrs");
  assert(strcmp(result, "apbqrs") == 0);
  printf("test_mergeAlternately -- PASSED!\n");
}
