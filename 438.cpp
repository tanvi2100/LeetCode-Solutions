class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        int k = p.size();
	    int n = s.size();
	    unordered_map<char,int>m;
	    for(auto i:p){
	        m[i]++;
	    }
        int count = m.size();
        int i=0,j=0;
        while(j<n){
            if(m.find(s[j])!=m.end()){
                m[s[j]]--;
                if(m[s[j]]==0){
                    count--;
                }
            }
            if((j-i+1)<k){
                j++;
            }
            else if((j-i+1)==k){
                if(count==0){
                    ans.push_back(i);
                }
                if(m.find(s[i])!=m.end()){
                    m[s[i]]++;
                    if(m[s[i]]==1){
                        count++;
                    }
                }
                i++;
                j++;
            }
        }
        return ans;
    }
};
