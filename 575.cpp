class Solution {
public:
    int distributeCandies(vector<int>& a) {
        int n = a.size();
        map<int,int>m;
        for(int i=0;i<n;i++){
            m[a[i]]++;
        }
        int ans = m.size();
        int res=min(ans,n/2);
        return res;
    }
};
