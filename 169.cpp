class Solution {
    
public:
    int moorevoting(vector<int>& a,int n){
        int candidate = 0, count = 0;
        for(int i=0;i<n;i++){
            if(count == 0){
                candidate = a[i];
            }
            if(a[i]==candidate){
                count++;
            }
            else{
                count--;
            }
        }
        return candidate;
}

int check(vector<int>& a,int n,int candidate){
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]==candidate){
            count++;
        }
    }
    if(count > n/2){
        return 1;
    }
    else{
        return 0;
    }
}

int majority(vector<int>& a,int n){
   int candidate = moorevoting(a,n);

   if(check(a,n,candidate)){
        return candidate;
   }
   else{
        return -1;
   }
}

    int majorityElement(vector<int>& a) {
    int n = a.size();
    int ans = majority(a,n);
        return ans;
    }
};
