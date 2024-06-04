#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX 100;

typedef struct Stack {
  char items[100];
  int top;
} Stack;

Stack *createStack() {
  Stack *stack = (Stack *)malloc(sizeof(Stack));
  if (stack == NULL) {
    exit(1);
  }
  // convention in C to set it to -1 if doesn't contain ellements
  stack->top = -1;
  return stack;
}

// zero base index
bool isFull(Stack *stack) { return stack->top == MAX - 1; }
bool isEmpty(Stack *stack) { return stack->top == -1; }

void push(Stack *stack, char c) {
  if (isFull(stack)) {
    printf("Stack overflow");
    exit(1);
  };

  stack->items[stack->top++] = c;
}

char pop(Stack *stack) {
  if (isEmpty(stack)) {
    printf("stack underflow!");
    exit(1);
  }
  char topChar = stack->items[stack->top];
  stack->top--;
  return topChar;
}

bool isValid(char *s) {
  for (int i = 0; s[i] != '\0', i++;) {

    // TODO: if char == ([{ push -> mirror is pop
    // if ( push ) on the stack and when you encounter ) compare to return value
    // of the ) if is not equal return false and break otherwise keep going
    // whilst true!
  }
}

int main() { printf("hello"); }
