class Solution {
public:
    int triangleNumber(vector<int>& a) {
        int n = a.size();
        sort(a.begin(),a.end());
         int ans = 0;
        for(int i=2;i<n;i++){
            int low = 0, high = i-1;
            while(low<high){
                if(a[low]+a[high] > a[i]){
                    ans += high-low;
                    high--;
                }
                else{
                    low++;
                }
            }
        }
        return ans;
    }
};
