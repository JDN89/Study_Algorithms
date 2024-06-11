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
struct TreeNode {
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
};

void printNode(struct TreeNode *child) {

  if (child == NULL) {
    return;
  }

  printf("%d", child->val);

  printNode(child->left);
  printNode(child->right);
}

struct TreeNode *invertTree(struct TreeNode *root) {

  printNode(root);
  return root;
}
