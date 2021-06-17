class Solution {
public:
     double median(vector<int>& a, vector<int>& b){
         int m =a.size();
         int n=b.size();
          if(m>n){
           return median(b,a);
        }
     int beg=0,end=m;
        while(beg<=end){
        int i1 = (beg+end)/2;
        int i2 = ((m+n+1)/2)-i1;

        int min1 = (i1==m)? INT_MAX : a[i1];
        int max1 = (i1==0)? INT_MIN : a[i1-1];

        int min2 = (i2==n)? INT_MAX : b[i2];
        int max2 = (i2==0)? INT_MIN : b[i2-1];

        if(max1<=min2 && max2<=min1){
            if (((m+n) %2) == 0){
                return ( (double) (((max(max1,max2))+(min(min1,min2)))/2.0));
            }
            else{
                return((double)(max(max1,max2)));
            }
        }
        else if(max1>min2){
            end = i1-1;
        }
        else{
            beg = i1+1;
        }
    }
         return -1.0;
}
         
     
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
       double ans;
        ans = median(a,b);
        return ans;
    }
};
    
