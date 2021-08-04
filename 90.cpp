class Solution {
public:
    vector<vector<int>> ans;
    set<vector<int>>s;
    
    void solve(vector<int> ip,vector<int> op){
        if(ip.size()==0){
            if(s.find(op)==s.end()){
                s.insert(op);
                ans.push_back(op);
            }
            return;
        }
        vector<int>op1 = op;
        vector<int>op2 = op;
        op1.push_back(ip[0]);
        ip.erase(ip.begin()+0);
        solve(ip,op1);
        solve(ip,op2);
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& ip) {
        vector<int>op;
        sort(ip.begin(),ip.end());
        solve(ip,op);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
