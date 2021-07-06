class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& a, int r, int c) {
        int m = a.size();
        int n = a[0].size();
        if(r*c != m*n){
            return a;
        }
        vector<int>v;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                v.push_back(a[i][j]);
            }
        }
        vector<vector<int>> ans(r,vector<int>(c));
        auto it = v.begin();
        for(int i=0;i<r;i++){
            for(int j = 0;j<c;j++){
                ans[i][j]=*it;
                it++;
            }
        }
        return ans;
    }
};
