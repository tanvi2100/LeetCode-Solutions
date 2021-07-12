class Solution {
public:
    int maxProduct(vector<int>& a) {
        int n = a.size();
        int  minVal=a[0],maxVal=a[0];
	    int ans=a[0];
	    for(int i=1;i<n;i++){
	        int  p = minVal*a[i];
	        int  q = maxVal*a[i];
	        minVal = min(a[i],min(p,q));
	        maxVal = max(a[i],max(p,q));
	        ans = max(ans, maxVal);
	    }
	    return ans;
    }
};
