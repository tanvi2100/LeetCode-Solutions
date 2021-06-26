class Solution {
public:
    int search(vector<int>& a, int target) {
        int n = a.size();
        int low=0,high=n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(a[mid]==target){
                return mid;
            }
            else if(a[mid]<target){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return -1;
    }
};
