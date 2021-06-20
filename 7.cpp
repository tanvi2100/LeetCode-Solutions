class Solution {
public:
    int reverse(int y) {
        vector<int>s;
        int sign=1;
        long long int  x=y;
        if(x<0){
            x = -x;
            sign=-1;
        }
        while(x>0){
            int rem = x%10;
            s.push_back(rem);
            x=x/10;
        }
        long long int ans=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            ans = (ans*10)+s[i];
            
        }
        if(ans>INT_MAX){
            return 0;
        }
        else{
            return (int)ans*sign; 
        }
    }
};
