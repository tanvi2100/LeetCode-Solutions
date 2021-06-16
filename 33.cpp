class Solution {
    int sorted(vector<int>& a,int low,int high,int x){
        if(low>high){
            return -1;
        }
        int mid=(low+high)/2;
        if(a[mid]==x){
            return mid;
        }
        if(a[low]<=a[mid]){
            if(x>=a[low] && x<=a[mid]){
                return sorted(a,low,mid-1,x);
            }
            else{
                return sorted(a,mid+1,high,x);
            }
        }
        else{
             if(x>=a[mid] && x<=a[high]){
             return sorted(a,mid+1,high,x);
            }
            else{
                return sorted(a,low,mid-1,x);
            }
        }

}
public:
    int search(vector<int>& a, int x) {
        int n = a.size();
       return  sorted(a,0,n-1,x);
        
    }
};
