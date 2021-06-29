class Solution {
public:
    int maxProfit(vector<int>& a) {
        int n= a.size();
        int profit = 0;
        int minPrice = INT_MAX;
        for(int i=0;i<n;i++){
            minPrice = min(minPrice,a[i]);
            profit = max(profit,a[i]-minPrice);
        }
    return profit;
    }
};
