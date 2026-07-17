/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL) return 0;
        int leftsubtree = maxDepth(root->left);
        int rightsubtree = maxDepth(root->right);

        if(leftsubtree == 0) return 1 + rightsubtree;
        if(rightsubtree == 0) return 1 + leftsubtree;

        //leftsubtree and rightsubtree both exists
        return 1 + max(leftsubtree , rightsubtree);
    }
};
