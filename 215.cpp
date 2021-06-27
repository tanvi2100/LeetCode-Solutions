//Solution 1

class Solution {
public:
    int findKthLargest(vector<int>& a, int k) {
        int n = a.size();
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<n;i++){
            pq.push(a[i]);
            if(pq.size() > k){
                pq.pop();
            }
        }
        return pq.top();
    }
};

//Solution 2

class Solution {
public:
    int findKthLargest(vector<int>& a, int k) {
        int n = a.size();
        sort(a.begin(),a.end());
        int ans = a[n-k];
        return ans;
    }
};
