//
// //
// FUNCTION maxDepth(root):
//     IF root IS NULL:
//         RETURN 0
//
//     // Initialize queue for level order traversal
//     CREATE queue
//     ADD root TO queue
//     SET depth TO 0
//
//     WHILE queue IS NOT EMPTY:
//         // Number of nodes at current level
//         SET levelSize TO SIZE OF queue
//
//         // Process all nodes at the current level
//         FOR i FROM 0 TO levelSize - 1:
//             // Get the front node in the queue
//             SET node TO DEQUEUE from queue
//
//             // Enqueue the left child if it exists
//             IF node.left IS NOT NULL:
//                 ENQUEUE node.left TO queue
//
//             // Enqueue the right child if it exists
//             IF node.right IS NOT NULL:
//                 ENQUEUE node.right TO queue
//
//         // Increment depth since we finished processing one level
//         INCREMENT depth
//
//     RETURN depth
//
// QUeue is FIFO
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

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
}

// tail not null -> attach to tail
// head is null -> head is node
void enqueue(Queue *q, TreeNode *node) {
  QueueNode *newNode = malloc(sizeof(QueueNode));
  newNode->node = node;
  if (q->tail != NULL) {
    q->tail->next = newNode;
    q->tail = newNode;
  }
  if (q->head == NULL) {
    q->tail = q->head = newNode;
  }
  q->size += 1;
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
  q->size -= 1;
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
      if (head->left != NULL) {
        enqueue(&q, head->left);
      }
      if (head->right != NULL) {
        enqueue(&q, head->right);
      }
    }
  }
  return depth;
}
