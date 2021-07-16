class Solution {
public:
    int subarraySum(vector<int>& a, int k) {
        int n = a.size();
        int sum = 0,ans=0;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            sum = sum + a[i];
            if(sum==k){
                ans++;
            }
            if(m.find(sum-k)!=m.end()){
                ans += m[sum-k];
            }
            m[sum]++;
        }
        return ans;
    }
};
