#include "table.h"
#include "memory.h"

#include <stdint.h>
#include <stdlib.h>

void initTable(Table *table) {
  table->count = 0;
  table->capacity = 0;
  table->entries = NULL;
}

void freeTable(Table *table) {
  FREE_ARRAY(Entry, table->entries, table->capacity);
  initTable(table);
}

uint32_t hashInt(const int key) {
  uint32_t hash = 2166136261u;

  // Get the bytes of the integer
  const uint8_t *bytes = (const uint8_t *)&key;

  // We get the sizeof(int) -> 4 bytes so we loop 4 times
  // size_t because uint8_t is unsigned
  for (size_t i = 0; i < sizeof(int); i++) {

    hash ^= (uint8_t)bytes[i];
    hash *= 16777619;
  }

  return hash;
}
