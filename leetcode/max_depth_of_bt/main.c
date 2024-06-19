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
