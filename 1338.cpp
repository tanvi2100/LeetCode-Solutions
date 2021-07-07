class Solution {
public:
    int minSetSize(vector<int>& a) {
        unordered_map<int,int>m;
        int n = a.size();
        for (auto i: a){
            m[i]++;
        }
        priority_queue<pair<int,int>>p;
        for(auto i:m){
            p.push({i.second,i.first});
        }
        int x=0, ans=0;
        while(x<n/2){
            x = x+p.top().first;
            p.pop();
            ans++;
        }
        return ans;
    }
};
