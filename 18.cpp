class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& a, int k) {
        int n = a.size();
        if(n<4){
            return {};
        }
          sort(a.begin(), a.end());
        vector<vector<int>> results; 
    for(int i=0;i<n-3;i++){
         if(i == 0 || a[i] != a[i-1]) {
        for(int j=i+1;j<n-2;j++){
            int l=j+1;
            int r = n-1;
            while(l<r){
                if(a[i]+a[j]+a[l]+a[r] == k){
                    results.push_back({a[i], a[j], a[l], a[r]});
                     while(l < r && a[l] == a[l+1]) l++;
                    while(l < r && a[r] == a[r-1]) r--;
                    l++;
                    r--;
                }
                else if(a[i]+a[j]+a[l]+a[r] > k) {
                    r--;
                }
                else{
                    l++;
                }
            }
             while(j < a.size()-2 && a[j] == a[j+1]) j++;
        }
        }
    }
        return results;
    }
};
