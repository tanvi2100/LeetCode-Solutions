class Solution {
    vector<int>original;
    int n;
public:
    Solution(vector<int>& a) {
        original = a;
        n = original.size();
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return original;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
         vector<int> ans = original;
        for(int i=n-1;i>=0;i--){
            int r = rand() % (i+1);
            swap(ans[i],ans[r]);
        }
        return ans;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
