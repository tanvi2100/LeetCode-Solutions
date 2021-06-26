class Solution {
public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        int m=a.size();
        int n = b.size();
        int i=0,j=0;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        vector<int>ans;
        vector<int> :: iterator rept;
        while(i<m && j<n){
            if(a[i]<b[j]){
                i++;
            }
            else if(a[i]>b[j]){
                j++;
            }
            else if(a[i]==b[j]){
                ans.push_back(a[i]);
                i++;
                j++;
            }
        }
        rept = unique(ans.begin(),ans.end());
        ans.erase(rept,ans.end());
        return ans;
    }
};
