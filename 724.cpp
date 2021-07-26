class Solution {
public:
    int pivotIndex(vector<int>& a) {
        int n = a.size();
        int sum = 0;
        for(int i=0;i<n;i++){
            sum+=a[i];
        }
        int leftSum = 0, rightSum = sum;
        for(int i=0;i<n;i++){
            rightSum -= a[i];
            if(leftSum == rightSum){
                return i;
            }
            leftSum += a[i];
        }
        return -1;
    }
};
