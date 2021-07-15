class Solution {
public:
    vector<int> findErrorNums(vector<int>& a) {
         int n = a.size();
        sort(a.begin(),a.end());
        int ans,a1;
        for(int i=0;i<n;i++){
            if(a[i]==a[i+1]){
               a1=a[i];
                break;
            }
        }
        int sum = n*(n+1)/2;
        for(int i=0;i<n;i++){
            sum=sum-a[i];
        }
        return {a1,sum+a1};
    }
};
