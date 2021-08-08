// Solution 1

class Solution {
public:
    double myPow(double x, int n) {
        double ans = pow(x,n);
        return ans;
    }
};

// Solution 2

class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.0;
        long long int num = n;
        if(num < 0){
            num = -1 * num;
        }
        while(num){
            if(num%2==0){
                x = x * x;
                num = num/2;
            }
            else{
                ans = ans * x;
                num--;
            }
        }
        if(n < 0){
            ans = (double)(1.0)/(double)(ans);
        }
        return ans;
    }
};
