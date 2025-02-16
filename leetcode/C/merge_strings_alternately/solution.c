#include "solution.h"
#include "string.h"
#include <stdlib.h>

char *mergeAlternately(char *word1, char *word2) {
  size_t lengthWord1 = 0;
  size_t lengthWord2 = 0;

  if (word1 != NULL) {
    lengthWord1 = strlen(word1);
  }
  if (word2 != NULL) {
    lengthWord2 = strlen(word2);
  }
  size_t total = lengthWord1 + lengthWord2 + 1;

  char *str = malloc(sizeof(char) * total);

  if (word1 == NULL && word2 == NULL) {
    return str;
  }

  size_t i = 0, j = 0, k = 0;

  while (i < lengthWord1 || j < lengthWord2) {
    if (i < lengthWord1) {
      str[k] = word1[i];
      i++;
      k++;
    }
    if (j < lengthWord2) {
      str[k] = word2[j];
      j++;
      k++;
    }
  }
  str[k] = '\0';

  return str;
}
