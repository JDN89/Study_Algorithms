#include "table.h"
#include "memory.h"

#include <stdint.h>
#include <stdlib.h>

#define TABLE_MAX_LOAD 0.75

Key createKey(int key, uint32_t hash) {
  Key newKey;
  newKey.key = key;
  newKey.hash = hash;
  return newKey;
}

void initTable(Table *table) {
  table->count = 0;
  table->capacity = 0;
  table->entries = NULL;
}

void freeTable(Table *table) {
  FREE_ARRAY(Entry, table->entries, table->capacity);
  initTable(table);
}

static Entry *findEntry(Entry *entries, int capacity, Key *key) {
  uint32_t index = key->hash % capacity;
  for (;;) {
    // &entries because we return a pointer to the entry
    Entry *entry = &entries[index];
    if (entry->key == key || entry->key == NULL) {
      return entry;
    }

    index = (index + 1) % capacity;
  }
}

static void adjustCapacity(Table *table, int capacity) {
  Entry *entries = ALLOCATE(Entry, capacity);
  for (int i = 0; i < capacity; i++) {
    entries[i].key = NULL;
    entries[i].value = NIL_VAL;
  }
  for (int i = 0; i < table->capacity; i++) {
    Entry *entry = &table->entries[i];
    if (entry->key == NULL)
      continue;

    Entry *dest = findEntry(entries, capacity, entry->key);
    dest->key = entry->key;
    dest->value = entry->value;
  }
  table->entries = entries;
  table->capacity = capacity;
}

bool tableSet(Table *table, Key *key, int value) {

  if (table->count + 1 > table->capacity + TABLE_MAX_LOAD) {
    int capacity = GROW_CAPACITY(table->capacity);
    adjustCapacity(table, capacity);
  }

  Entry *entry = findEntry(table->entries, table->capacity, key);
  bool isNewKey = entry->key == NULL;
  if (isNewKey)
    table->count++;

  entry->key = key;
  entry->value = value;
  return isNewKey;
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
