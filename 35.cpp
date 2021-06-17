class Solution {
public:
    int searchInsert(vector<int>& a, int x) {
        int n = a.size();
        int start=0,end=n-1;
        while(start<=end){
            int mid = (start+end)/2;
            if(a[mid]==x){
                return mid;
            }
            if(a[mid]<x){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return start;
    }
};
