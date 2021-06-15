class Solution {
public:
    int threeSumClosest(vector<int>& a, int x) {
        int n = a.size();
     sort(a.begin(),a.end());
        int res = a[0]+a[1]+a[2];
    if(n<3){
        return 0;
    }
    int ans=0;
    for(int i=0;i<n-2;i++){
        int j=i+1;
        int k=n-1;
        while(j<k){
    int s = a[i]+a[j]+a[k];
        if(abs(res-x) > abs(s-x)){
            res = s;
        }
       if(s >= x){
            k--;
        }
        else if(s<x){
           j++;
        }
            else{
                return s;
            }

        }
    }
   return res;
    }
};
