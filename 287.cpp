// Solution 1

class Solution {
public:
    int findDuplicate(vector<int>& a) {
        int n = a.size();
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            if(a[i]==a[i+1]){
                return a[i];
            }
        }
        return 0;
    }
};

// Solution 2

class Solution {
public:
    int findDuplicate(vector<int>& a) {
        int n = a.size();
        for(int i=0;i<n;i++){
           while(a[i]!=a[a[i]-1]){
               swap(a[i],a[a[i]-1]);
           }
        }
        return a[n-1];
    }
};

// Solution 3

class Solution {
public:
    int findDuplicate(vector<int>& a) {
        int n = a.size();
        for(int i=0;i<n;i++){
           while(a[i]!=i){
               if(a[i]==a[a[i]]){
                   return a[i];
               }
               swap(a[i],a[a[i]]);
           }
        }
        return 0;
    }
};
