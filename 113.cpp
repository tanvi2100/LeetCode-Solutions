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
    vector<vector<int>> ans;
    vector<int> v;
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(root==0){
            return ans;;
        }
        v.push_back(root->val);
        if(root->val == targetSum && root->left==0 && root->right==0){
            ans.push_back(v);
        }
        pathSum(root->left, targetSum - root->val);
        pathSum(root->right, targetSum - root->val);
        v.pop_back();
        return ans;
    }
};
