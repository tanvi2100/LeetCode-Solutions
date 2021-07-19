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
    vector<int>path;
    int count = 0;
    void solve(TreeNode* root, int targetSum){
        if(root==0){
            return;
        }
        path.push_back(root->val);
        pathSum(root->left, targetSum);
        pathSum(root->right, targetSum);
        int sum = 0;
        for(int i=path.size()-1;i>=0;i--){
            sum = sum + path[i];
            if(sum==targetSum){
                count++;
            }
        }
         path.pop_back();
    }
    int pathSum(TreeNode* root, int targetSum) {
        solve(root,targetSum);
        return count;
    }
};
