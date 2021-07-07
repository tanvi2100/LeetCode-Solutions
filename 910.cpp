class Solution {
public:
    int smallestRangeII(vector<int>& a, int k) {
        int n = a.size();
        sort(a.begin(),a.end());
        int res = a[n-1]-a[0];
        for(int i=0;i<n-1;i++){
            int maxH = max(a[n-1]-k,a[i]+k);
            int minH = min(a[0]+k,a[i+1]-k);
            res = min(res,(maxH-minH));
        }
        return res;
    }
};
