class Solution {
public:
    vector<int> sortedSquares(vector<int>& a) {
        int n = a.size();
        int pos=0;
        while(pos<n && a[pos]<0){
            pos++;
        }
        int neg = pos-1;
        vector<int>ans;
        while(neg>=0 && pos<n){
            if((a[neg]*a[neg]) < (a[pos]*a[pos])){
                ans.push_back(a[neg]*a[neg]);
                neg--;
            }
            else{
                ans.push_back(a[pos]*a[pos]);
                pos++;
            }
        }
        while(neg>=0){
            ans.push_back(a[neg]*a[neg]);
            neg--;
        }
        while(pos<n){
            ans.push_back(a[pos]*a[pos]);
            pos++;
        }
        return ans;
    }
};
