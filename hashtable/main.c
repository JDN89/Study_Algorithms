#include "table.h"
#include <stdio.h>

int main() {

  int value = 12345;
  uint32_t hash = hashInt(value);
  printf("Hash of %d is %u\n", value, hash);
  printf("Size of int: %zu bytes\n", sizeof(int));
  return 0;
}
