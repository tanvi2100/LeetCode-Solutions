class Solution {
public:
    int countSubset(vector<int>& a,int n,int sum){
        int dp[n+1][sum+1];
        int count = 0;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                count++;
            }
        }
        for(int i=0;i<=n;i++){
            for(int j=0;j<=sum;j++){
                if(i==0){
                    dp[i][j]=0;
                }
                if(j==0){
                    dp[i][j]=1;
                }
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=sum;j++){
                if(a[i-1]==0){
                    dp[i][j] = dp[i-1][j];
                }
                else if(a[i-1]<=j){
                    dp[i][j] = dp[i-1][j] + dp[i-1][j-a[i-1]];
                }
                else{
                     dp[i][j] = dp[i-1][j];
                }
            }
        }
        return pow(2,count)*dp[n][sum];
    }
    int findTargetSumWays(vector<int>& a, int target) {
        int n = a.size();
        int arrSum = 0;
        int count = 0;
        for(int i=0;i<n;i++){
            arrSum += a[i];
        }
        int sum = (arrSum+target)/2;
        if(target>sum || (arrSum+target)%2!=0 ){
            return 0;
        }
        return countSubset(a,n,sum);
    }
};
