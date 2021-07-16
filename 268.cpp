// Solution 1

class Solution {
public:
    int missingNumber(vector<int>& a) {
       int n = a.size();
        sort(a.begin(),a.end());
        int i;
        for(i=0;i<n;i++){
            if(a[i]!=i){
                return i;
            }
        }
        return i;
    }
};

// Solution 2
class Solution {
public:
    int missingNumber(vector<int>& a) {
        int n = a.size();
        for(int i=0;i<n;i++){
            while(a[i]!=i && a[i]!=n){
                swap(a[i],a[a[i]]);
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]!=i){
                return i;
            }
        }
        return n;
    }
};
