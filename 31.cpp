class Solution {
public:
 
    void nextPermutation(vector<int>& a) {
        int n = a.size();
        int index1,index2;
        for(index1=n-2;index1>=0;index1--){
            if(a[index1]<a[index1+1]){
                break;
            }
        }
        if(index1<0){
            reverse(a.begin(),a.end());
        }
        else{
            for(index2=n-1;index2>index1;index2--){
                if(a[index2]>a[index1]){
                    break;
                }
            }
            swap(a[index1],a[index2]);
            reverse(a.begin()+index1+1,a.end());
        }
    }
};
