class Solution {
public:
    int prime( int n){
        for( int i=2;i*i<=n;i++){
            if(n%i == 0){
                return 0;
            }
        }
        return 1;
    }
    int countPrimes(int n) {
        int c=0;
        for(int i=2;i<n;i++){
            if(prime(i)){
                c++;
            }
        }
        return c;
    }
};
