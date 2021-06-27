class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int maxsum=a[0],maxsofar=a[0];
        for(int i=1;i<a.size();i++){
            maxsum = max(maxsum+a[i],a[i]);
            maxsofar = max(maxsum,maxsofar);
        }
        return maxsofar;
    }
};
