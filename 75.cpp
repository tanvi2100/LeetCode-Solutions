class Solution {
public:
    void sortColors(vector<int>& a) {
        int n = a.size();
        int c0=0, c1=0, c2=0;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                c0++;
            }
            else if (a[i]==1){
                c1++;
            }
            else{
                c2++;
            }
        }
        int i=0;
        while(i<n){
            while(c0--){
                a[i++]=0;
            }
            while(c1--){
                a[i++]=1;
            }
            while(c2--){
                a[i++]=2;
            }
        }
        
    }
};
