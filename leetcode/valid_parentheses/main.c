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
    exit(1);
  };
  // NOTE: I had first used a postfix operator which first returns the value and
  // then increments it!
  // WARN: If you use the ++ operator as a prefix like: ++var, the value of var
  // is incremented by 1; then it returns the value.
  // If you use the ++ operator as a postfix like: var++, the original value of
  // var is returned first; then var is incremented by 1.
  //
  stack->items[++stack->top] = c;
}

char pop(Stack *stack) {
  if (isEmpty(stack)) {
    exit(1);
  }
  char topChar = stack->items[stack->top];
  stack->top--;
  return topChar;
}

bool isValid(char *s, Stack *stack) {
  // NOTE: or just create an array of char str[strlen(s)]; and set top to -1;
  // then to the underlyings executions with some refactoring... decrease head
  // in case of pop
  for (int i = 0; s[i] != '\0'; i++) {
    if (s[i] == '(') {
      push(stack, ')');
    } else if (s[i] == '[') {
      push(stack, ']');
    } else if (s[i] == '{') {
      push(stack, '}');
    } else if (s[i] == ')' || s[i] == ']' || s[i] == '}') {
      if (isEmpty(stack) || pop(stack) != s[i]) {
        return false;
      }
    }
  }
  return isEmpty(stack);
}

int main() {
  Stack *stack = createStack();
  char *input = "{[()]}"; // Change this to test different inputs

  if (isValid(input, stack)) {
    printf("The string is valid.\n");
  } else {
    printf("The string is not valid.\n");
  }
  free(stack);
  return 0;
}
