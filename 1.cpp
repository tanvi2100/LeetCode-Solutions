class Solution {
public:
    vector<int> twoSum(vector<int>& a, int x) {
        int n = a.size();
        int a1,a2;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(a[i]+a[j]==x){
                    a1=i;
                    a2=j;
                    break;
                }
            }
        }
        return {a1,a2};
    }
};
