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
    void calculateSum(TreeNode* root, int currentSum, int &totalSum){
        if(!root) return ;
        currentSum = currentSum*10 + root->val;
        if(!root->left && !root->right){
            totalSum = currentSum + totalSum;
        }else{
            calculateSum(root->left,currentSum , totalSum);
            calculateSum(root->right,currentSum , totalSum);
        }
    }
    int sumNumbers(TreeNode* root) {
        int currentSum = 0;
        int totalSum = 0;
        calculateSum(root,currentSum,totalSum);
        return totalSum ;
    }
};
