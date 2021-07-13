class Solution {
public:
    int solve(vector<int>& a,int low, int high, int n){
        while(low<=high){
            int mid = (low+high)/2;
            if((mid==0 || a[mid]>=a[mid-1]) && (mid==n-1 || a[mid]>=a[mid+1])){
                return mid;
            }
            else if(mid>0 && a[mid-1]>a[mid]){
                high =mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return 0;
    }
    int findPeakElement(vector<int>& a) {
        int n = a.size();
        return solve(a,0,n-1,n);
    }
};
