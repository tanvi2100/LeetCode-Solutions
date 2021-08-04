class Solution {
public:
    int longestOnes(vector<int>& a, int k) {
        int ans = 0, i = 0, zero = 0;
        for(int j=0;j<a.size();j++){
            if(a[j]==0){
                zero++;
            }
            while(zero > k){
                if(a[i]==0){
                    zero--;
                }
                i++;
            }
            ans = max(ans, j-i+1);
        }
        return ans;
    }
};
