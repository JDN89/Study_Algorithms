#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct TreeNode {
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
} TreeNode;

typedef struct QueueNode {
  struct TreeNode *node;
  struct QueueNode *next;
} QueueNode;

typedef struct {
  QueueNode *head;
  QueueNode *tail;
  int size;
} Queue;

bool isQueueEmpty(Queue *q) { return q->head == NULL; }

void initQueue(Queue *q) {
  q->head = NULL;
  q->tail = NULL;
  q->size = 0;
}

// tail not null -> attach to tail
// head is null -> head is node
void enqueue(Queue *q, TreeNode *node) {
  QueueNode *newNode = malloc(sizeof(QueueNode));
  newNode->node = node;
  newNode->next = NULL;
  if (q->tail != NULL) {
    q->tail->next = newNode;
    q->tail = newNode;
  }

  else {
    q->tail = q->head = newNode;
  }
  q->size++;
}

TreeNode *dequeueu(Queue *q) {
  if (isQueueEmpty(q)) {
    return NULL;
  }
  QueueNode *temp = q->head;
  q->head = q->head->next;
  if (q->head == NULL) {
    q->tail = NULL;
  }

  TreeNode *node = temp->node;
  free(temp);
  q->size--;
  return node;
}

void print_queue(Queue *q) {
  QueueNode *current = q->head;

  while (current != NULL) {
    printf("value of current node: %d \n", current->node->val);
    current = current->next;
  }
  printf("End reached \n");
}

int maxDepth(struct TreeNode *root) {

  if (root == NULL) {
    return 0;
  }

  Queue q;
  initQueue(&q);
  enqueue(&q, root);
  int depth = 0;

  while (!isQueueEmpty(&q)) {
    // set values in current level and increase depth
    int levelSize = q.size;
    depth++;
    for (int i = 0; i < levelSize; i++) {

      TreeNode *head = dequeueu(&q);
      if (head != NULL) {

        if (head->left != NULL) {
          enqueue(&q, head->left);
        }
        if (head->right != NULL) {
          enqueue(&q, head->right);
        }
      }
    }
  }
  return depth;
}

int main() {
  TreeNode *root = malloc(sizeof(TreeNode));
  root->val = 1;
  root->left = malloc(sizeof(TreeNode));
  root->right = malloc(sizeof(TreeNode));
  root->right->val = 2;

  printf("Maximum depth of the binary tree is: %d\n", maxDepth(root));

  // Test the print_queue function
  Queue q;
  initQueue(&q);
  enqueue(&q, root);
  enqueue(&q, root->left);
  enqueue(&q, root->right);
  print_queue(&q);

  return 0;
}
