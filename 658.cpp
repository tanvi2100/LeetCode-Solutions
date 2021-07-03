class Solution {
public:
    vector<int> findClosestElements(vector<int>& a, int k, int x) {
        int n = a.size();
        priority_queue<pair<int,int>>maxHeap;
        for(int i=0;i<n;i++){
            maxHeap.push({abs(a[i]-x),a[i]});
            if(maxHeap.size()>k){
                maxHeap.pop();
            }
        }
        vector<int>ans;
        while(!maxHeap.empty()){
            ans.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        
        sort(ans.begin(),ans.end());
        return ans;
    }
};
