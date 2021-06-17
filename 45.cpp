class Solution {
public:
    int jump(vector<int>& a) {
        int n = a.size();
        int reach=0,jump=0,curr=0;
        for(int i=0;i<n-1;i++){
            reach = max(reach,i+a[i]);
            if(i==curr){
                jump++;
                curr = reach;
            }
        }
        return jump;
    }
};
