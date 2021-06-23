class Solution {
public:
    int missingNumber(vector<int>& a) {
       int n = a.size();
        sort(a.begin(),a.end());
        int i;
        for(i=0;i<n;i++){
            if(a[i]!=i){
                return i;
            }
        }
        return i;
    }
};
