/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

void inorder(struct TreeNode* root, int* result, int* returnSize) {
    if (root == NULL) return;
    inorder(root->left, result, returnSize);
    result[(*returnSize)++] = root->val;
    inorder(root->right, result, returnSize);
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    *returnSize = 0;
    int* result = (int*)malloc(1000 * sizeof(int)); // Allocate enough space
    inorder(root, result, returnSize);
    return result;
}
