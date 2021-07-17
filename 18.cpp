class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& a, int k) {
        int n = a.size();
        sort(a.begin(),a.end());
        int left,right;
        vector<vector<int>> ans;
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                left = j+1;
                right = n-1;
                while(left<right){
                    int sum = a[i]+a[j]+a[left]+a[right];
                    if(sum == k){
                        ans.push_back({a[i],a[j],a[left],a[right]});
                        left++;
                        right--;
                    }
                    else if(sum>k){
                        right--;
                    }
                    else{
                        left++;
                    }
                }
            }
        }
        sort(ans.begin(),ans.end());
        ans.erase(unique(ans.begin(),ans.end()),ans.end());
        return ans;
    }
};
