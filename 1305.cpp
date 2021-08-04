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
    vector<int>ans, v1, v2;
    
    void inorder(TreeNode *root, vector<int> &v){
        if(root==0){
            return;
        }
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
    
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        inorder(root1, v1);
        inorder(root2, v2);
        int m = v1.size(), n = v2.size();
        int i=0, j=0;
        while(i<m && j<n){
            if(v1[i] < v2[j]){
                ans.push_back(v1[i++]);
            }
            else if(v1[i] > v2[j]){
                ans.push_back(v2[j++]);
            }
            else{
                ans.push_back(v1[i++]);
                ans.push_back(v2[j++]);
            }
        }
        while(i<m){
            ans.push_back(v1[i++]);
        }
        while(j<n){
            ans.push_back(v2[j++]);
        }
        return ans;
    }
};
