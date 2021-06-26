class Solution {
public:
    vector<int> intersect(vector<int>& a, vector<int>& b) {
        int n = a.size();
        int m = b.size();
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int i=0,j=0;
        vector<int>v;
        while(i<n && j<m){
            if(a[i]<b[j]){
                i++;
            }
            else if(a[i]>b[j]){
                j++;
            }
            else{
                v.push_back(a[i]);
                i++;
                j++;
            }
        }
        return v;
    }
};
