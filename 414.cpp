class Solution {
public:
    int thirdMax(vector<int>& a) {
        int n = a.size();
        unordered_map<int,int>m;
        priority_queue<int,vector<int>,greater<int>>p;
        for(int i=0;i<n;i++){
            m[a[i]]++;
            if(m[a[i]]==1){
                p.push(a[i]);
                if(p.size()>3){
                    p.pop();
                }
            }
        }
        if(p.size()==2){
            p.pop();
        }
        return p.top();
    }
};
