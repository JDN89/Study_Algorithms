// QUeue is FIFO

#include <stdlib.h>

typedef struct TreeNode {
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
} TreeNode;

typedef struct {
  TreeNode *head;
  TreeNode *tail;
  int size;
} Queue;

// tail not null -> attach to tail
// head is null -> head is node
void enqueue(Queue *q, TreeNode *node) {
  TreeNode *newNode = malloc(sizeof(TreeNode));
}

// if head == NULL -> queue is empty and we should reutrn an error
// temp store head
// head = temp.next
// if head ==null tail ==null
// free temp
// deQueue() {}

int maxDepth(struct TreeNode *root) {}
