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
    vector<int> inorderTraversal(TreeNode* root) {
        if(root == NULL) return {};
        stack<TreeNode*>s;
        stack<bool>visited;
        s.push(root);
        visited.push(0);
        vector<int>ans;
        while(!s.empty()){
            TreeNode *temp = s.top();
            s.pop();
            bool flag = visited.top();
            visited.pop();
            // first time visit
            if(flag==0){
                //right
                if(temp->right){
                    s.push(temp->right);
                    visited.push(0);
                }
                //node
                s.push(temp);
                visited.push(1);
                //left
                if(temp->left){
                    s.push(temp->left);
                    visited.push(0);
                }
            }
            //second time visit
            else 
            ans.push_back(temp->val);
        }
        return ans;
    }
};
