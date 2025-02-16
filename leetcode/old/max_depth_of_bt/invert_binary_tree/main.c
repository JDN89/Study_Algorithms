// https://leetcode.com/problems/invert-binary-tree/
// https://www.youtube.com/watch?v=UbhlOk7vjVY&t=210s&ab_channel=JacobSorber
// https://www.youtube.com/watch?v=hfwwaNNJ-0A&ab_channel=JacobSorber

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

#include <stdio.h>
#include <stdlib.h>
typedef struct TreeNode {
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
} TreeNode;

TreeNode *createNode(int value) {
  TreeNode *result = malloc(sizeof(TreeNode));
  if (result != NULL) {
    result->left = NULL;
    result->right = NULL;
    result->val = value;
  }
  return result;
};

// NOTE: in the beginning I made the mistake of changing the values instead of
// the comlete node adress This cause the children not to be swapped togheter
// with their parents. Only the values where exchanged instead of the actual
// connections
TreeNode *invertTree(TreeNode *root) {
  if (root == NULL) {
    return root;
  }

  // NOTE: in case one of the arms of the AST is null -> don't create a temp
  // TreeNode struct just swap the branches
  if (root->left != NULL && root->right != NULL) {
    struct TreeNode *temp = root->left;
    root->left = root->right;
    root->right = temp;
  } else if (root->left == NULL && root->right != NULL) {
    root->left = root->right;
    root->right = NULL;
  } else if (root->left != NULL && root->right == NULL) {
    root->right = root->left;
    root->left = NULL;
  }

  invertTree(root->left);

  invertTree(root->right);
  return root;
}

void printNode(struct TreeNode *child) {

  if (child == NULL) {
    return;
  }

  printf("%d", child->val);

  printNode(child->left);
  printNode(child->right);
}

int main() {

  TreeNode *n1 = createNode(4);
  TreeNode *n2 = createNode(2);
  TreeNode *n3 = createNode(1);
  TreeNode *n4 = createNode(3);
  TreeNode *n5 = createNode(7);
  TreeNode *n6 = createNode(6);
  TreeNode *n7 = createNode(9);

  n1->left = n2;
  n1->right = n5;
  n2->left = n3;
  n2->right = n4;
  n5->left = n6;
  n5->right = n7;

  invertTree(n1);
  printNode(n1);
}
