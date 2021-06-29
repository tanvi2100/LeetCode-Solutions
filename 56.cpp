class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
        vector<vector<int>> res;
        if(a.size()==0){
            return res;
        }
        sort(a.begin(),a.end());
        vector<int>temp=a[0];
        for(auto i:a){
            if(i[0]<=temp[1]){
                temp[1]=max(i[1],temp[1]);
            }
            else{
                res.push_back(temp);
                temp=i;
            }
        }
        res.push_back(temp);
        return res;
            
    }
};
