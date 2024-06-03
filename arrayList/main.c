#include <stdio.h>
#include <stdlib.h>

#define GROW_CAPACITY(capacity) ((capacity) < 8 ? 8 : (capacity) * 2)

#define GROW_ARRAY(type, pointer, oldCount, newCount)                          \
  (type *)reallocate(pointer, sizeof(type) * (oldCount),                       \
                     sizeof(type) * (newCount))

#define FREE_ARRAY(type, pointer, oldCount)                                    \
  reallocate(pointer, sizeof(type) * (oldCount), 0)

void *reallocate(void *pointer, size_t oldSize, size_t newSize) {
  if (newSize == 0) {
    free(pointer);
    return NULL;
  }

  void *result = realloc(pointer, newSize);
  if (result == NULL)
    exit(1);
  return result;
}

typedef struct {
  int *code;
  int count;
  int capacity;
} ArrayList;

void initArrayList(ArrayList *list) {
  list->code = NULL;
  list->capacity = 0;
  list->count = 0;
}

void writeChunk(ArrayList *list, int byte) {
  // Check if we still have enough space
  if (list->capacity < list->count + 1) {
    int oldCapacity = list->capacity;
    list->capacity = GROW_CAPACITY(oldCapacity);
    list->code = GROW_ARRAY(int, list->code, oldCapacity, list->capacity);
  }
  // insert new bute into the array
  list->code[list->count] = byte;
  list->count++;
}

void freeChunk(ArrayList *list) {
  FREE_ARRAY(int, list->code, list->capacity);
  initArrayList(list);
}

int main() {
  ArrayList list;
  initArrayList(&list);

  // Add elements to the ArrayList
  for (int i = 0; i < 20; i++) {
    writeChunk(&list, i);
  }

  // Print the ArrayList
  for (int i = 0; i < list.count; i++) {
    printf("%d ", list.code[i]);
  }
  printf("\n");

  // Free the ArrayList
  freeChunk(&list);

  return 0;
}
