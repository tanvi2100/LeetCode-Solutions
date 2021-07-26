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
    TreeNode *bst(vector<int>& a,int start,int end){
        if(start>end){
            return 0;
        }
        int mid = (start+end)/2;
        TreeNode *root = new TreeNode(a[mid]);
        root->left = bst(a,start,mid-1);
        root->right = bst(a,mid+1,end);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        return bst(nums,0,n-1);
    }
};
