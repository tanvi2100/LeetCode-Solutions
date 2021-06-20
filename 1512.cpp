class Solution {
public:
    int numIdenticalPairs(vector<int>& a) {
        unordered_map<int,int>m;
        int count=0;
        for(auto i:a){
            if (m.find(i) != m.end()){
                count = count + m[i];
            }
            m[i]++;
        }
        return count;
    }
};
