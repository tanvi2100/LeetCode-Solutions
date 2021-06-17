class Solution {
public:
    int trap(vector<int>& a) {
        int n = a.size();
        if(n==0){
            return 0;
        }
        int maxL[n],maxR[n],water[n];
        maxL[0]=a[0],maxR[n-1]=a[n-1];
        for(int i=1;i<n;i++){
            maxL[i] = max(maxL[i-1],a[i]);
        }
        for(int i=n-2;i>=0;i--){
            maxR[i] = max(maxR[i+1],a[i]);
        }
        for(int i=0;i<n;i++){
            water[i] = min(maxR[i],maxL[i]) - a[i];
        }
        int sum = 0;
        for(int i=0;i<n;i++){
            sum = sum + water[i];
        }
        return sum;
    }
};
