class Solution {
public:
    bool isPalindrome(int x) {
        long long int n=x,r=0;
        while(x>0){
            int rem = x%10;
            r = (r*10)+rem;
            x=x/10;
        }
        if(r==n){
            return true;
        }
        else{
            return false;
        }
    }
};
