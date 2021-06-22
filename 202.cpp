class Solution {
public:
    int sq(int n){
        int sum=0;
        while(n>0){
            int rem=n%10;
            sum = sum+(rem*rem);
            n=n/10;
        }
        return sum;
    }
    bool isHappy(int n) {
       int slow=n,fast=n;
        do{
            slow = sq(slow);
            fast = sq(sq(fast));
        }while(slow!=fast);
        return (slow==1);
    }
};
