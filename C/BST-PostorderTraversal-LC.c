/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 void postorder(struct TreeNode* root, int* result, int* returnSize)
 {
    if(root==NULL) return;
    postorder(root->left, result, returnSize);
    postorder(root->right, result, returnSize);
    result[(*returnSize)++]=root->val;
 }
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* postorderTraversal(struct TreeNode* root, int* returnSize) {
*returnSize=0;
int* result=(int*)malloc(1000*sizeof(int));
postorder(root, result, returnSize);
return result;
}
