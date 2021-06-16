class Solution {
    int first(vector<int>& a, int n,int x){
    int low=0,high=n-1,res=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]>x){
            high=mid-1;
        }
        else if(a[mid]<x){
            low=mid+1;
        }
        else{
            res=mid;
            high=mid-1;
        }
    }
    return res;
}

 int last(vector<int>& a, int n,int x){
    int low=0,high=n-1,res=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]>x){
            high=mid-1;
        }
        else if(a[mid]<x){
            low=mid+1;
        }
        else{
            res=mid;
            low=mid+1;
        }
    }
    return res;
}
public:
    vector<int> searchRange(vector<int>& a, int x) {
        int n=a.size();
       int a1 = first(a,n,x);
       int a2 = last(a,n,x);
        return {a1,a2};
    }
};
