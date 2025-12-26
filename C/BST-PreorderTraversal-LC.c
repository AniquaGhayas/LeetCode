/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 void preorder(struct TreeNode* root, int* result, int* returnSize)
 {
    if(root==NULL)return;
    result[(*returnSize)++]=root->val;
    preorder(root->left, result, returnSize);
    preorder(root->right, result, returnSize);
 }
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    *returnSize = 0;
    int* result = (int*)malloc(1000*sizeof(int));
    preorder(root, result, returnSize);
    return result;
}
