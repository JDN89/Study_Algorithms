#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct QueueResult {
  int value;
  bool success;
} QueueResult;

typedef struct Node {
  int value;
  struct Node *next;
} Node;

typedef struct Queue {
  Node *head;
  Node *tail;
} Queue;

void initQueue(Queue *q) {
  q->head = NULL;
  q->tail = NULL;
}

bool enqueue(Queue *q, int value) {
  Node *newNode = malloc(sizeof(Node));
  if (newNode == NULL) {
    return false;
  }
  newNode->value = value;
  // becasue it goes to the end of the linked list
  newNode->next = NULL;
  // point next field of current tail to newNode
  if (q->tail != NULL) {
    q->tail->next = newNode;
  }
  // assign newnode as the tail
  q->tail = newNode;
  if (q->head == NULL) {
    q->head = newNode;
  }
  return true;
}

QueueResult deQueue(Queue *q) {
  QueueResult result;
  if (q->head == NULL) {
    result.success = false;
    return result;
  }
  Node *temp = q->head;
  // set head to next value
  q->head = q->head->next;
  // if the new head is null, then there is also no tail anymore -> so tail =
  // null
  if (q->head == NULL) {
    q->tail = NULL;
  }
  result.value = temp->value;
  free(temp);
  return result;
}

// Free all elements in the queue
void freeQueue(Queue *q) {
  Node *current = q->head;
  Node *next;
  while (current != NULL) {
    next = current->next;
    free(current);
    current = next;
  }
  q->head = NULL;
  q->tail = NULL;
}

void print_queue(Queue *q) {
  Node *current = q->head;

  while (current != NULL) {
    printf("value of current node: %i \n", current->value);
    current = current->next;
  }
  printf("End reached \n");
}

int main() {
  Queue q1, q2, q3;
  initQueue(&q1);
  initQueue(&q2);
  initQueue(&q3);

  enqueue(&q1, 2);
  enqueue(&q2, 5);
  enqueue(&q2, 10);
  enqueue(&q2, 44);
  enqueue(&q3, 3);
  // QueueResult result;
  // while ((result = deQueue(&q2)).success != false) {
  //   printf("value= %i \n", result.value);
  // }
  print_queue(&q2);
}
