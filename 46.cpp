class Solution {
public:
    vector<vector<int>> ans;
    
    void solve(vector<int>& a, int l, int r){
        if(l==r){
            ans.push_back(a);
            return;
        }
        for(int i=l;i<=r;i++){
            swap(a[l],a[i]);
            solve(a,l+1,r);
            swap(a[l],a[i]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& a) {
        int n = a.size();
        solve(a,0,n-1);
        return ans;
    }
};
