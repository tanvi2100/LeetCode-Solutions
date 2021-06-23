class Solution {
public:
    bool isPerfectSquare(int n) {
        long long int start=1,end=n;
        while(start<=end){
            long long int mid = (start+end)/2;
            if(mid*mid == n){
                return true;
            }
            else if(mid*mid < n){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return false;
    }
};
