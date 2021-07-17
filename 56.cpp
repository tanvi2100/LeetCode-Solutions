class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        int n = intervals.size();
        if(n==0){
            return ans;
        }
        sort(intervals.begin(),intervals.end());
        vector<int>temp = intervals[0];
        for(auto i:intervals){
            if(i[0]<= temp[1]){
                temp[1] = max(i[1],temp[1]);
            }
            else{
                ans.push_back(temp);
                temp=i;
            }
        }
        ans.push_back(temp);
        return ans;
    }
};
