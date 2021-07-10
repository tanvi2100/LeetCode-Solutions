class Solution {
public:
    int sumOfUnique(vector<int>& a) {
        int n = a.size();
        unordered_map<int,int>m;
        for(auto i:a){
            m[i]++;
        }
        int sum = 0;
        for (auto i:m){
            if(i.second == 1){
                sum+= i.first;
            }
        }
        return sum;
    }
};
