
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

// calculate depth and pass to parent node

int maxDepth(struct TreeNode *root) {
  if (!root)
    return 0;

  int leftDepth = maxDepth(root->left);
  int rightDept = maxDepth(root->right);

  // keep calculating max depth and return +1 to parent which adds the max of
  // left OR right
  // so Root receives the max depth of it's longest brach!
  return 1 + (leftDepth > rightDept ? leftDepth : rightDept);
}

int main() {
  TreeNode *root = malloc(sizeof(TreeNode));

  root->val = 1;
  root->right = malloc(sizeof(TreeNode));
  root->right->val = 2;
  int solution = maxDepth(root);
  printf("solution: %i", solution);
}

/* NOTE:

      1
     / \
    2   3
   /   / \
  4   5   6
           \
            7

Execution Trace
Call Stack for Root Node (1)

maxDepth(1)
Call Stack for Node (2)

maxDepth(2)
maxDepth(4)
maxDepth(nullptr) returns 0
maxDepth(nullptr) returns 0
Node (4): max(0, 0) + 1 = 1
maxDepth(nullptr) returns 0
Node (2): max(1, 0) + 1 = 2

Call Stack for Node (3)

maxDepth(3)
maxDepth(5)
maxDepth(nullptr) returns 0
maxDepth(nullptr) returns 0
Node (5): max(0, 0) + 1 = 1
maxDepth(6)
maxDepth(nullptr) returns 0
maxDepth(7)
maxDepth(nullptr) returns 0
maxDepth(nullptr) returns 0
Node (7): max(0, 0) + 1 = 1
Node (6): max(0, 1) + 1 = 2
Node (3): max(1, 2) + 1 = 3

Back to Root Node (1)

maxDepth(1)
Left depth: 2 (from node 2)
Right depth: 3 (from node 3)

Root (1): max(2, 3) + 1 = 4

Maximum Depth Calculation
The maximum depth of the tree is 4. */
