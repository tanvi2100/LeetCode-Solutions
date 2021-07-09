class Solution {
public:
    int lengthOfLIS(vector<int>& a) {
        int n = a.size();
        int dp[n];
        int ans = INT_MIN;
        dp[0]=1;
        for(int i=1;i<n;i++){
            dp[i] = 1;
            for(int j=0;j<i;j++){
                if(a[i]>a[j] && dp[i]<1+dp[j]){
                    dp[i] = 1+dp[j];
                }
            }
        }
        for(int i=0;i<n;i++){
            ans = max(ans,dp[i]);
        }
        return ans;
    }
};
