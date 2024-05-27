#ifndef table_h
#define table_h

#include <stdbool.h>
#include <stdint.h>
// NOTE: I use int as key and value because that is what I need for the twoSum
// solution
//  for more complext types -> crafting interpreters chapter 20

typedef struct {
  int key;
  uint32_t hash;
} Key;

Key createKey(int key, uint32_t hash);

typedef struct {
  Key *key;
  int value;
} Entry;

typedef struct {
  int count;
  int capacity;
  Entry *entries;
} Table;

void initTable(Table *table);

void freeTable(Table *table);

uint32_t hashInt(const int key);

bool tableSet(Table *table, Key *key, int value);

#endif
